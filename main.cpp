//+------------------------------------------------------------------+
//|                                         Stochastic Break.mq4/ex4 |
//|                                              Otlhomame Thibelang |
//|                                                 Twitter @Syl_100 |
//+------------------------------------------------------------------+
#property copyright "Otlhomame Thibelang"
#property link      "@Syl_100"
#property version   "1.00"

// A simple technical method to match stochastic divergence with a break of structure. 
// Leverage and scale in until an opposing break of structure happens.

//Candle 2
double C2Open = Open[2];
double C2Close = Close[2];

//Candle 1
double C1Open = Open[1];
double C1Close = Close[1];

//Candle 0
double C0Open = Open[0];
double C0Close = Close[0];

//Defining Candle 2 Parameters
double C2High  = High[2];  //Candle 2 High Price
double C2Low   = Low[2];  //Candle 2 Low Price

//Defining Candle 1 Parameters
double C1High  = High[1];  //Candle 1 High Price
double C1Low   = Low[1];  //Candle 1 Low Price

//Current Candle Stochastic vs Previous one
double stoch0= iStochastic(NULL,0,5,3,3,MODE_SMA,0,MODE_MAIN,1);
double stoch1= iStochastic(NULL,0,5,3,3,MODE_SMA,0,MODE_MAIN,2);

//Defining Bullish Bearish engulfing conditions
bool Buy= C1Low<C2Low && C1Close>C2High;
bool Sell= C1High>C2High && C1Close<C2Low;


//+------------------------------------------------------------------+
//| Expert initialization function                                   |
//+------------------------------------------------------------------+
int OnInit()
  {
//---
   
//---
   return(INIT_SUCCEEDED);
  }
//+------------------------------------------------------------------+
//| Expert deinitialization function                                 |
//+------------------------------------------------------------------+
void OnDeinit(const int reason)
  {
//---
   
  }
//+------------------------------------------------------------------+
//| Expert tick function                                             |
//+------------------------------------------------------------------+
void OnTick()
  {
//---
  static datetime LastAlert=0;
  if (LastAlert != Time[0])
     if(stoch0 > stoch1 && Buy==True)
         Alert("Buy");
     else if (stoch0 < stoch1 && Sell==True)
         Alert("Sell");
      
  LastAlert = Time[0];
//+------------------------------------------------------------------+
   }
