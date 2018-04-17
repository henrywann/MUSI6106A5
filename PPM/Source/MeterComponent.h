/*
  ==============================================================================

    MeterComponent.h
    Created: 17 Apr 2018 5:15:23pm
    Author:  Zichen Wang

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class MeterComponent    : public Component
{
public:
    MeterComponent();
    ~MeterComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MeterComponent)
};
