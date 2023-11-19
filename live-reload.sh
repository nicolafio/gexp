WAIT_TIME_SECONDS=0.1
SOURCES_DIR="src"
CLIENT_EXECUTABLE="build/gexp"
CLIENT_PROCESS=""

function hash_sources() {
  local hash=""
  for f in $(find $SOURCES_DIR -type f)
  do
    hash+=$(cat $f)
    hash=$(echo $hash | shasum | cut -d ' ' -f1)
  done
  echo $hash
}

SOURCES_HASH=$(hash_sources)

function wait_for_change() {
  echo waiting for change
  local hash=""
  while true
  do
    sleep $WAIT_TIME_SECONDS
    hash=$(hash_sources)
    if [ "$hash" != "$SOURCES_HASH" ]
    then
      SOURCES_HASH=$hash
      break
    fi
  done
}

while true
do 
  make client || {
    wait_for_change
    continue
  }
  
  $CLIENT_EXECUTABLE &
  CLIENT_PROCESS=$!

  wait_for_change

  kill $CLIENT_PROCESS
done
