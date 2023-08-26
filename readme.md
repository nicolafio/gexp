## UG4 Honours Project RTS Game Prototype Experiment

This is a rudimentary prototype featuring few real-time strategy (RTS) aspects. The prototype is inteded to aid for the study on peer-to-peer massively-multiplayer-online real-time-strategy gaes.

## Setup

This project requires some external software to be installed in the system.

The following table summarizes what external software is needed.

<table>
    <tr>
        <th rowspan="2">Name</th>
        <th rowspan="2">Description</th>
        <th colspan="2">Installation</th>
    </tr>
    <tr>
        <th>MacOS</th>
        <th>Debian/Ubuntu</th>
    </tr>
    <tr>
        <td>
            <a href="https://brew.sh">Homebrew (<code>brew</code>)</a>
        </td>
        <td>
            <b>(Only needed in MacOS)</b>
            Package manager needed for installing other necessary software.
        </td>
        <td>
            <pre>$&nbsp;HOST=raw.githubusercontent.com<br>$&nbsp;PATH=Homebrew/install/HEAD/install.sh<br>$&nbsp;CURL="curl&nbsp;-fsSL&nbsp;https://$HOST/$PATH"<br>$&nbsp;/bin/bash&nbsp;-c&nbsp;"$($CURL)"</pre>
        </td>
        <td>Not&nbsp;necessary.</td>
    </tr>
    <tr>
        <td><a href="https://www.libsdl.org/">Simple DirectMedia Laer (SDL)</a></td>
        <td>Cross-platform library for input and graphics.
        <td><code>$&nbsp;brew&nbsp;install&nbsp;sdl2</code></td>
        <td><code>#&nbsp;apt&nbsp;install&nbsp;libsdl2&#8209;dev</code></td>
    </tr>
</table>