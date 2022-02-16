# Technical Entry Alert Tool

It is well known that part of the gate keeping (timing) process to systematic capital deployment in a macroeconomic portfolio involves techincal analysis. 
This is a simple tool to detect stochastic divergence on the same instance as a break of structure (reversal) in a buyer's and seller's market. It was designed for an Islamic trading account.
Ideally, an agressive approach would involve scaling in via lower time frames (using the same method) in the same direction. An engulfing technical signal merely represents a break of structure and this boilerplate setup could be adapted to varying time compressions if the divergent condition is still valid.

Examples below are run on recent market conditions using standard issue MT4 Stochastic parameters of %K Period: 5 & %D Period: 3

## Sell Signal

Notice a liquidity grab before structure was broken as an engulfing candle with Stochastic divergence at play.


![EURUSDH1](https://user-images.githubusercontent.com/43067037/153544752-a440d402-a3a2-4ddf-a520-3c07fc985c04.png)

## Buy Signal

The same happened for a buy setup


![EURUSDH1](https://user-images.githubusercontent.com/43067037/153544974-cd4e56a2-4aa8-4386-a32d-73089928b084.png)


With this basic structure, you could modify your entry technique to more than index candles 1 and 2 so long as the divergence condition is satisfied.

### Please note that this code is executable in an MQL4 IDE to ensure utility. In that context, it may be saved as a script or expert advisor.
