#Cryptographic Anomaly - [CGA]

![Cryptographicanomaly](http://i61.tinypic.com/30ry4w5.png)

The Rarest Coin Ever Made!

##What is a Cryptographic Anomaly?

Cryptographicanomaly is a modified clone of Litecoin, which is a lite version of Bitcoin using scrypt as a proof-of-work algorithm.

It is the rarest coin that has ever been made. 

It works by using the modulus operation thus finding the remainder of the current block number (nHeight) divided by the current difficulty. 
If the remainder falls between 1 and 0.1 then the block reward changes to 1 for that block. 

Bonuses:

If the remainder is exactly 0 (difficulty divides evenly into the block number) then the block reward changes to 10 for that block.
If the remainder is exactly 100 then the block reward changes to 100 for that block.

	Total possible Anomalies: 10 Billion
	Anomalies per block: 0 (unless certen paramaters are met)
	Block Time: 40 sec
	Difficulty Refresh: 120 sec / 3 blocks
	Mined Out: ??? Nobody Knows ???
	RPC=13932
	P2P=13931


##Suggested cryptographicanomaly.conf:

	server=1
 	listen=1
 	rpcuser={insert username}
 	rpcpassword={insert password}
 	rpcport=13932
	addnode=71.105.130.10


##License

	Copyright (c) 2009-2014 Bitcoin Developers
	Copyright (c) 2011-2014 Litecoin Developers
	Copyright (c) 2014 Cryptographicanomaly Developers

Cryptographicanomaly is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.