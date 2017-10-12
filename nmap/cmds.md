Host scanning

``` nmap -sn 192.168.1.182/24 ```

Sample Response
```

Starting Nmap 7.01 ( https://nmap.org ) at 2017-10-12 00:00 UTC
Nmap scan report for router.huawei.com (192.168.1.1)
Host is up (0.0040s latency).
Nmap scan report for host1.localserver.com (192.168.1.24)
Host is up (0.056s latency).
Nmap scan report for host2.localserver.com (192.168.1.25)
Host is up (0.056s latency).
Nmap done: 256 IP addresses (11 hosts up) scanned in 9.49 seconds
```


`Tracing route`
Ping scans allows including trace route information of the targets. Use the Nmap option  --traceroute to trace the route from the scanning machine to the target host:
```
sudo nmap -sn --traceroute google.com microsoft.com
```

Sample response:
```
Starting Nmap 7.01 ( https://nmap.org ) at 2017-10-12 16:47 SGT
Nmap scan report for google.com (172.217.27.110)
Host is up (0.0024s latency).
Other addresses for google.com (not scanned): 2404:6800:4003:c00::8b
rDNS record for 172.217.27.110: sin11s04-in-f14.1e100.net

TRACEROUTE (using port 443/tcp)
HOP RTT     ADDRESS
1   ... 2
3   2.93 ms 118.201.77.30
4   1.71 ms 118.201.77.29
5   1.86 ms 165.21.12.68
6   ...
7   4.74 ms 72.14.210.117
8   ...
9   3.91 ms 209.85.242.199
10  2.30 ms sin11s04-in-f14.1e100.net (172.217.27.110)

Nmap scan report for microsoft.com (104.40.211.35)
Host is up (0.26s latency).
Other addresses for microsoft.com (not scanned): 104.43.195.251 23.100.122.175 23.96.52.53 191.239.213.197

TRACEROUTE (using port 443/tcp)
HOP RTT       ADDRESS
-   Hops 1-5 are the same as for 172.217.27.110
6   ...
7   4.74 ms   203.208.191.98
8   3.90 ms   ae18-0.sge-96cbe-1a.ntwk.msn.net (104.44.226.168)
9   34.45 ms  ae17-0.maa30-96cbe-1b.ntwk.msn.net (104.44.224.214)
10  38.96 ms  ae0-0.maa30-96cbe-1a.ntwk.msn.net (104.44.226.238)
11  58.58 ms  ae5-0.bom30-96cbe-1b.ntwk.msn.net (104.44.226.240)
12  161.27 ms ae2-0.mrs01-96cbe-1a.ntwk.msn.net (104.44.227.18)
13  161.66 ms ae0-0.mrs01-96cbe-1b.ntwk.msn.net (104.44.227.13)
14  171.58 ms ae2-0.zrh-96cbe-1b.ntwk.msn.net (104.44.227.7)
15  188.24 ms be-9-0.ibr01.fra30.ntwk.msn.net (104.44.5.60)
16  184.52 ms be-1-0.ibr02.fra30.ntwk.msn.net (104.44.5.49)
17  206.95 ms be-2-0.ibr02.ams06.ntwk.msn.net (104.44.5.44)
18  206.85 ms 104.44.10.71
19  187.65 ms 104.44.10.69
20  ... 30

Nmap done: 2 IP addresses (2 hosts up) scanned in 12.72 seconds
```


`Listing open ports on a target host`

```nmap www.thequestspace.com```

```
Starting Nmap 7.01 ( https://nmap.org ) at 2017-10-12 17:25 SGT
Nmap scan report for www.thequestspace.com (54.169.84.47)
Host is up (0.0039s latency).
rDNS record for 54.169.84.47: ec2-54-169-84-47.ap-southeast-1.compute.amazonaws.com
Not shown: 997 filtered ports
PORT    STATE  SERVICE
22/tcp  open   ssh
80/tcp  open   http
443/tcp closed https

Nmap done: 1 IP address (1 host up) scanned in 4.72 seconds

```
