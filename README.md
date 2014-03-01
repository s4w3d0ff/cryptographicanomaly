#Cryptographic Anomaly - [CGA]

![Cryptographicanomaly](http://i61.tinypic.com/30ry4w5.png)

The Elusive Coin

##What is Cryptographic Anomaly?

Cryptographic Anomaly is a modified clone of Litecoin, which is a lite version of Bitcoin using scrypt as a proof-of-work algorithm.

<<<<<<< HEAD
=======
Cryptographic Anomaly is a new innovative altcoin that is the first (and only) of its kind. It is known as the "elusive" coin by its users. It uses the modulo operation to determine if it puts a new CGA into circulation. Because of this new block reward algorithm, when the coin gains popularity, it decreases the rate that coins come into circulation. So as popularity increases the value of CGA increases exponentially.

With Cryptographic Anomaly the normal block reward is zero, it uses the modulo operation to find the remainder of the current block number divided by the current difficulty. If that remainder falls between 1 and 0 then the block reward gets changed to 1 for that block, thus an anomaly is born. By using this algorithm it becomes impossible to project how many CGA will come in to existence at any given time, which gives us our "truly rare" or elusive coin. The block time is 40 seconds and the difficulty refresh time is every 2 blocks. The max coins will be 10 billion (but that my take eternity to fill).

When the coin was first launched it was brought to my attention that if the difficulty was 1 or below then the odds of generating an anomaly was more or less 1/1. That means that almost every block was generating an anomaly. This defeated the purpose of the Cryptographic Anomaly so in a recent update I had "raised the stakes" and made it so that once the coin had hit block 15,000, and the difficulty continues to be below 3, the MAX probability of making an anomaly will be 1/3. That means after block 15,000, and the difficulty is below 3, 1 out of 3 blocks will generate an anomaly. If the difficulty rises above 3 then the normal modulo operation will take effect.

Another problem we were having was that the difficulty was fluctuating at inconsistent rates. So in a recent update I had implemented Kimoto's Gravity Well in order to smooth out those fluctuations.
>>>>>>> 8ced905168ea24827202896a29468685aa577e4a

	Scrypt Algorithm
	Total possible Anomalies: 10 Billion
	Anomalies per block: 1/diff
	Bonus Block: if(fmod(block,diff) < 0.5){ 1 CGA }
	Block Time: 40 sec
	Difficulty Refresh: 80 sec / 2 blocks
	Mined Out: ??? Nobody Knows ???
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
