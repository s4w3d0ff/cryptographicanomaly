#Cryptographic Anomaly - [CGA]

![Cryptographicanomaly](http://cganomaly.com/imgs/logo.png)

The Elusive Coin

##What is Cryptographic Anomaly?

Cryptographic Anomaly is a modified clone of Litecoin, which is a lite version of Bitcoin using scrypt as a proof-of-work algorithm. 

Cryptographic Anomaly uses a unique block reward algorithm. The block reward is directly effected by the current difficulty. If the difficulty is below 3 then the block reward will be 0.33333333. If the difficulty is above 3 then the algorithm uses the modulo operation to find the remainder of the block number divided by the difficulty. If the remainder falls between 0.25 and 0 then an Anomaly is born, making a bonus block that is worth 1 CGA for that block. If the remainder doesn't fall between 0.25 and 0 then the block reward is 1 divided by the current difficulty.

What this does is as the difficulty increases (from a higher network hash rate due to increased popularity/demand) the amount of anomalies that are being generated decreases. At any given time the probability of 1 CGA coming into existence is, more or less, 1/difficulty (unless the difficulty is 3 or below, then probability is 1/3). The probability of generating a bonus block is (1/diff) * (diff * 4).

The max amount of CGA that can come into existence in your lifetime will be around 16 million. That makes the max per year around 200k, and fastest that CGA can be mined out of it's 10 billion coins at +50k years. Which makes CGA the longest mine-able coin that does not half, gives you "whole" number block rewards, and can be considered a "rare coin". What this means is that CGA will be profitable to mine for generations to come. Your children's children's children's children will be getting the same block rewards you are getting now.

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
