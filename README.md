#Cryptographic Anomaly - [CGA]  

![Cryptographicanomaly](http://cganomaly.com/imgs/logo.png)

The Elusive Coin
[CGAnomaly.com](CGAnomaly.com)  

##What is Cryptographic Anomaly?

Cryptographic Anomaly is a modified clone of Litecoin, which is a lite version of Bitcoin using scrypt as a proof-of-work algorithm. 

Cryptographic Anomaly is a crypto-coin that uses a unique block reward algorithm. The block reward is directly effected by the current difficulty. If the difficulty is below 3 then the block reward will be 0.33333333. If the difficulty is above 3 then the algorithm uses the modulo operation to find the remainder of the block number divided by the difficulty. If the remainder falls between 0.25 and 0 then an Anomaly is born, making a bonus block that is worth 1 CGA for that block. If the remainder doesn't fall between 0.25 and 0 then the block reward is 1 divided by the current difficulty.

What this does is as the difficulty increases (from a higher network hash rate due to increased popularity/demand) the amount of anomalies that are being generated decreases.  

---------------------------------------------------------------------------------------------------

###Find the maximum amount of CGA (if diff < 3) to come into existence (not counting bonus blocks):  
1 month(30days) = 2,592,000 sec  
2,592,000 sec / 40 sec blocks = 64,800 blocks per month  
64,800 blocks per month x .33333333 per block = 21,599.999784 CGA per month  
21,599.999784 CGA per month x 12 = 259,199.997408 CGA per year  
100 years (if you live to 100) x 259,199.997408 CGA per year = 25,919,999.7408 CGA in a "lifetime"  

This makes CGA the longest minable coin that does not half, gives you "whole" number block rewards, and can be considered a "rare coin". What this means is that CGA will be profitable to mine for generations to come. Your children's children's children's children will be getting the same block rewards you are getting now.

###Minimum amount of time to "mine out" CGA:
10 Billion CGA / 259,199.997408 CGA per year = 38,580.2472993827 years  

-----------------------------------------------------------------------------------------------------

At any given time the probability of 1 CGA coming into existence is, more or less, 1/difficulty (unless the difficulty is 3 or below, then probability is 1/3). The probability of generating a bonus block is (1/diff) * (diff * 4).  

To calculate the probability of how often, yourself (solo-mining) or a pool, will generate 1 CGA you would need to factor in your (or pools) hash-rate. First you need to find the probability of generating an anomaly at any given time (1/difficulty). Then you need to find the probability of you or your pool solving a block (your hash-rate/ network hash-rate). Now multiply those two probabilities together to get your personal probability of generating an anomaly.  

Example:(1/4) * (10,000,000/200,000,000) = 1/80; So you should generate 1 CGA out of every 80 blocks, which would take about 53.33 minutes(that is if all variables stay stagnent during those 80 blocks).

To find the probability of generating a bonus block, all you need to do is multiply your probability for generating 1 CGA by 1/4.
Example: If your probability of generating 1 CGA is 1/80 then probability of generating a bonus block is 1/320.

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
