#### Requirement


1. Disconnect the GTA process with internet, so we can do jobs without other player destroying.
2. Disconnect the GTA process with internet, so we can buy stuff without paying money.
3. Take snacks quickly with a hot key
4. Take armor quickly with a hot key
5. Hack the Fingerprint for Casino Heist
6. Hack the preparation jobs for Doom's day Part II & III
7. Call Lester with phone for a hot key

#### Method 

1. Simulate keyevent for 3/4/7
2. Create firewall rules and enable or disable for 1/2
3. Capture global hot key for Quick trigger functions.


netsh advfirewall firewall add rule name="lebo_robin" dir=in program="C:\Users\robin\Downloads\happycast\happycast_temp\happycastpc.exe" action=allow
netsh advfirewall firewall add rule name="lebo_robin" dir=out program="C:\Users\robin\Downloads\happycast\happycast_temp\happycastpc.exe" action=allow

netsh advfirewall firewall delete rule name="lebo_robin"