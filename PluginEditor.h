/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Fib_seq_gatesAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    Fib_seq_gatesAudioProcessorEditor (Fib_seq_gatesAudioProcessor&);
    ~Fib_seq_gatesAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Fib_seq_gatesAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Fib_seq_gatesAudioProcessorEditor)
};
