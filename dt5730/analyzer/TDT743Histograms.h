#ifndef TDT743PulseArea_h
#define TDT743PulseArea_h

#include <string>
#include "THistogramArrayBase.h"

/// Class for making histograms of raw DT743 waveforms;
class TDT743PulseArea : public THistogramArrayBase {
public:
  TDT743PulseArea();
  virtual ~TDT743PulseArea(){};

  void UpdateHistograms(TDataContainer& dataContainer);

  // Reset the histograms; needed before we re-fill each histo.
  void Reset();
  
  void CreateHistograms();
  
  /// Take actions at begin run
  void BeginRun(int transition,int run,int time){		
    CreateHistograms();		
  }

private:

  int FrequencySetting;

};

#endif


