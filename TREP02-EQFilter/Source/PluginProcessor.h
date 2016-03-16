/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#ifndef PLUGINPROCESSOR_H_INCLUDED
#define PLUGINPROCESSOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginParameter.h"
#include "Mu45FilterCalc.h"

// MU4545_DO_THIS: Include the header files for any STK objects you will need
#include "BiQuad.h"

//==============================================================================
/**
*/
class Mu45effectAudioProcessor  : public AudioProcessor
{
public:
    //==============================================================================
    Mu45effectAudioProcessor();
    ~Mu45effectAudioProcessor();

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

    void processBlock (AudioSampleBuffer&, MidiBuffer&) override;

    //==============================================================================
    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool silenceInProducesSilenceOut() const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const String getProgramName (int index) override;
    void changeProgramName (int index, const String& newName) override;

    //==============================================================================
    void getStateInformation (MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;
    
    // MU4545_DO_THIS: Add a pointer for each user Parameter
    PluginParameter* volumeParam;
	
	PluginParameter* hsfCutoff;
	PluginParameter* hsfGain;

	PluginParameter* hpnfCutoff;
	PluginParameter* hpnfGain;
	PluginParameter* hpnfBand;
	
	PluginParameter* mpnfCutoff;
	PluginParameter* mpnfGain;
	PluginParameter* mpnfBand;

	PluginParameter* lpnfCutoff;
	PluginParameter* lpnfGain;
	PluginParameter* lpnfBand;

	PluginParameter* lsfCutoff;
    PluginParameter* lsfGain;  
	
private:
    //==============================================================================
   
    // MU4545_DO_THIS: Add any variables or objects you need here, for example
    // algorithm params or other necessary STK objects
    float volumeGain;
    float fs;                   // the sample rate of the DAW
    const float filterQ = 5.0;  // a const is a variable that cannot be changed.

	// filters
	stk::BiQuad hpnfL, hpnfR;
	stk::BiQuad mpnfL, mpnfR;
	stk::BiQuad lpnfL, lpnfR;
	stk::BiQuad hsfL, hsfR;
	stk::BiQuad lsfL, lsfR;

    // MU4545_DO_THIS: Add any methods used in algorithm parameter calculation or DSP
    void calcAlgorithmParams();
    
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Mu45effectAudioProcessor)
};


#endif  // PLUGINPROCESSOR_H_INCLUDED
