#Cryptographic Anomaly - [CGA]

![Cryptographicanomaly](http://cganomaly.com/imgs/newlogo.png)

The Elusive Coin

##What is Cryptographic Anomaly?

Cryptographic Anomaly is a modified clone of Litecoin, which is a lite version of Bitcoin using scrypt as a proof-of-work algorithm. Its block reward it directly reflected by the difficulty. As the difficulty increases the amount of CGA that enters curculation decreases.


	Scrypt Algorithm
	Total possible Anomalies: 10 Billion
	Anomalies per block: 1/diff
	Bonus Block: if(fmod(block,diff) < 0.25){ 1 CGA }
	Block Time: 40 sec
	Difficulty Refresh: 80 sec / 2 blocks
	Mined Out: No less than 50,000 years
	RPC=13932
	P2P=13931


##Suggested cryptographicanomaly.conf:

	server=1
 	listen=1
 	rpcuser={insert username}
 	rpcpassword={insert password}
 	rpcport=13932
	

##License

	Copyright (c) 2009-2014 Bitcoin Developers
	Copyright (c) 2011-2014 Litecoin Developers
	Copyright (c) 2014 Cryptographicanomaly Developers

Cryptographicanomaly is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.
