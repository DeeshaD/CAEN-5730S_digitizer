#ifndef PulseAreaHistogram_h
#define PulseAreaHistogram_h

#include <string>
#include "THistogramArrayBase.h"

/// Class for making histograms of raw DT743 waveforms;
class PulseAreaHistogram : public THistogramArrayBase {
public:
  TDT743Waveform();
  virtual ~TDT743Waveform(){};

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


