bulletdodge
===========
*bulletdodge* is a San Andreas: Multiplayer modification for disabling incoming bullet sync data.

This mod is a safer and better alternative to traditional health hacks, as bulletdodge taps into
the netcode of San Andreas: Multiplayer in order to prevent bullets shot by other people from
appearing on your screen. This means that bullets that would otherwise hit you will not deal any
damage.

Because of this, the server will not be notified that you were hit by the bullet, making *bulletdodge*
usable even in environments where the player's health and armor stats are stored by the server to
detect cheaters.

Usage
-----
*bulletdodge* can be invoked via:

    /b(ullet)d(odge) [amount]

where `amount` is a number between 0 and 100, which determines what percentage of all incoming packets
should be blocked.

License
-------
*bulletdodge* is an open source project covered by the MIT License. See [LICENSE](LICENSE) for more
information or visit http://opensource.org/licenses/MIT.