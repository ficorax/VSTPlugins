/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 4.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "GUI.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
GUI::GUI ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (HighShelfGain = new unknown ("new slider"));
    HighShelfGain->setRange (0, 10, 0);
    HighShelfGain->setSliderStyle (Slider::LinearHorizontal);
    HighShelfGain->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    HighShelfGain->addListener (this);

    addAndMakeVisible (HighShelfBand = new Slider ("new slider"));
    HighShelfBand->setRange (0, 10, 0);
    HighShelfBand->setSliderStyle (Slider::Rotary);
    HighShelfBand->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    HighShelfBand->addListener (this);

    addAndMakeVisible (HighPeakNotchGain = new unknown ("new slider"));
    HighPeakNotchGain->setRange (0, 10, 0);
    HighPeakNotchGain->setSliderStyle (Slider::LinearHorizontal);
    HighPeakNotchGain->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    HighPeakNotchGain->addListener (this);

    addAndMakeVisible (HighPeakNotchGainTxt = new Label ("new label",
                                                         TRANS("Peak/Notch Filter Gain")));
    HighPeakNotchGainTxt->setFont (Font (15.00f, Font::plain));
    HighPeakNotchGainTxt->setJustificationType (Justification::centredLeft);
    HighPeakNotchGainTxt->setEditable (false, false, false);
    HighPeakNotchGainTxt->setColour (TextEditor::textColourId, Colours::black);
    HighPeakNotchGainTxt->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (HighPeakNotchBand = new Slider ("new slider"));
    HighPeakNotchBand->setRange (0, 10, 0);
    HighPeakNotchBand->setSliderStyle (Slider::Rotary);
    HighPeakNotchBand->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    HighPeakNotchBand->addListener (this);

    addAndMakeVisible (HighPeakNotchBandTxt = new Label ("new",
                                                         TRANS("High Peak/Notch Filter Bandwidth")));
    HighPeakNotchBandTxt->setFont (Font (15.00f, Font::plain));
    HighPeakNotchBandTxt->setJustificationType (Justification::centredLeft);
    HighPeakNotchBandTxt->setEditable (false, false, false);
    HighPeakNotchBandTxt->setColour (TextEditor::textColourId, Colours::black);
    HighPeakNotchBandTxt->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (MidPeakNotchGain = new unknown ("new slider"));
    MidPeakNotchGain->setRange (0, 10, 0);
    MidPeakNotchGain->setSliderStyle (Slider::LinearHorizontal);
    MidPeakNotchGain->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    MidPeakNotchGain->addListener (this);

    addAndMakeVisible (MidPeakNotchBand = new Slider ("new slider"));
    MidPeakNotchBand->setRange (0, 10, 0);
    MidPeakNotchBand->setSliderStyle (Slider::Rotary);
    MidPeakNotchBand->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    MidPeakNotchBand->addListener (this);

    addAndMakeVisible (LowPeakNotchGain = new unknown ("new slider"));
    LowPeakNotchGain->setRange (0, 10, 0);
    LowPeakNotchGain->setSliderStyle (Slider::LinearHorizontal);
    LowPeakNotchGain->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    LowPeakNotchGain->addListener (this);

    addAndMakeVisible (LowPeakNotchBand = new Slider ("new slider"));
    LowPeakNotchBand->setRange (0, 10, 0);
    LowPeakNotchBand->setSliderStyle (Slider::Rotary);
    LowPeakNotchBand->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    LowPeakNotchBand->addListener (this);

    addAndMakeVisible (LowShelfGain = new unknown ("new slider"));
    LowShelfGain->setRange (0, 10, 0);
    LowShelfGain->setSliderStyle (Slider::LinearHorizontal);
    LowShelfGain->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    LowShelfGain->addListener (this);

    addAndMakeVisible (LowShelfBand = new Slider ("new slider"));
    LowShelfBand->setRange (0, 10, 0);
    LowShelfBand->setSliderStyle (Slider::Rotary);
    LowShelfBand->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    LowShelfBand->addListener (this);

    addAndMakeVisible (HighShelfGainTxt = new Label ("new label",
                                                     TRANS("High Shelf Filter Gain")));
    HighShelfGainTxt->setFont (Font (15.00f, Font::plain));
    HighShelfGainTxt->setJustificationType (Justification::centredLeft);
    HighShelfGainTxt->setEditable (false, false, false);
    HighShelfGainTxt->setColour (TextEditor::textColourId, Colours::black);
    HighShelfGainTxt->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (HighShelfBandTxt = new Label ("new label",
                                                     TRANS("High Shelf Filter Bandwidth")));
    HighShelfBandTxt->setFont (Font (15.00f, Font::plain));
    HighShelfBandTxt->setJustificationType (Justification::centredLeft);
    HighShelfBandTxt->setEditable (false, false, false);
    HighShelfBandTxt->setColour (TextEditor::textColourId, Colours::black);
    HighShelfBandTxt->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LowShelfGainTxt = new Label ("new label",
                                                    TRANS("Low Shelf Filter Gain")));
    LowShelfGainTxt->setFont (Font (15.00f, Font::plain));
    LowShelfGainTxt->setJustificationType (Justification::centredLeft);
    LowShelfGainTxt->setEditable (false, false, false);
    LowShelfGainTxt->setColour (TextEditor::textColourId, Colours::black);
    LowShelfGainTxt->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LowShelfBandTxt = new Label ("new label",
                                                    TRANS("Low Shelf Filter Bandwidth")));
    LowShelfBandTxt->setFont (Font (15.00f, Font::plain));
    LowShelfBandTxt->setJustificationType (Justification::centredLeft);
    LowShelfBandTxt->setEditable (false, false, false);
    LowShelfBandTxt->setColour (TextEditor::textColourId, Colours::black);
    LowShelfBandTxt->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (MidPeakNotchGainTxt = new Label ("new label",
                                                        TRANS("Peak/Notch Filter Gain")));
    MidPeakNotchGainTxt->setFont (Font (15.00f, Font::plain));
    MidPeakNotchGainTxt->setJustificationType (Justification::centredLeft);
    MidPeakNotchGainTxt->setEditable (false, false, false);
    MidPeakNotchGainTxt->setColour (TextEditor::textColourId, Colours::black);
    MidPeakNotchGainTxt->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (MidPeakNotchBandTxt = new Label ("new label",
                                                        TRANS("Mid Peak/Notch Filter Bandwidth")));
    MidPeakNotchBandTxt->setFont (Font (15.00f, Font::plain));
    MidPeakNotchBandTxt->setJustificationType (Justification::centredLeft);
    MidPeakNotchBandTxt->setEditable (false, false, false);
    MidPeakNotchBandTxt->setColour (TextEditor::textColourId, Colours::black);
    MidPeakNotchBandTxt->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LowPeakNotchGainTxt = new Label ("new label",
                                                        TRANS("Peak/Notch Filter Gain")));
    LowPeakNotchGainTxt->setFont (Font (15.00f, Font::plain));
    LowPeakNotchGainTxt->setJustificationType (Justification::centredLeft);
    LowPeakNotchGainTxt->setEditable (false, false, false);
    LowPeakNotchGainTxt->setColour (TextEditor::textColourId, Colours::black);
    LowPeakNotchGainTxt->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LowPeakNotchBandTxt = new Label ("new label",
                                                        TRANS("Low Peak/Notch Filter Bandwidth")));
    LowPeakNotchBandTxt->setFont (Font (15.00f, Font::plain));
    LowPeakNotchBandTxt->setJustificationType (Justification::centredLeft);
    LowPeakNotchBandTxt->setEditable (false, false, false);
    LowPeakNotchBandTxt->setColour (TextEditor::textColourId, Colours::black);
    LowPeakNotchBandTxt->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (HighPeakNotchFreq = new Slider ("new slider"));
    HighPeakNotchFreq->setRange (0, 10, 0);
    HighPeakNotchFreq->setSliderStyle (Slider::LinearVertical);
    HighPeakNotchFreq->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    HighPeakNotchFreq->addListener (this);

    addAndMakeVisible (HighPeakNotchFreqTxt = new Label ("new label",
                                                         TRANS("Center Freq")));
    HighPeakNotchFreqTxt->setFont (Font (15.00f, Font::plain));
    HighPeakNotchFreqTxt->setJustificationType (Justification::centredLeft);
    HighPeakNotchFreqTxt->setEditable (false, false, false);
    HighPeakNotchFreqTxt->setColour (TextEditor::textColourId, Colours::black);
    HighPeakNotchFreqTxt->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (MidPeakNotchFreq = new Slider ("new slider"));
    MidPeakNotchFreq->setRange (0, 10, 0);
    MidPeakNotchFreq->setSliderStyle (Slider::LinearVertical);
    MidPeakNotchFreq->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    MidPeakNotchFreq->addListener (this);

    addAndMakeVisible (MidPeakNotchFreqTxt = new Label ("new label",
                                                        TRANS("Center Freq")));
    MidPeakNotchFreqTxt->setFont (Font (15.00f, Font::plain));
    MidPeakNotchFreqTxt->setJustificationType (Justification::centredLeft);
    MidPeakNotchFreqTxt->setEditable (false, false, false);
    MidPeakNotchFreqTxt->setColour (TextEditor::textColourId, Colours::black);
    MidPeakNotchFreqTxt->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LowPeakNotchFreq = new Slider ("new slider"));
    LowPeakNotchFreq->setRange (0, 10, 0);
    LowPeakNotchFreq->setSliderStyle (Slider::LinearVertical);
    LowPeakNotchFreq->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    LowPeakNotchFreq->addListener (this);

    addAndMakeVisible (LowPeakNotchFreqTxt = new Label ("new label",
                                                        TRANS("Center Freq")));
    LowPeakNotchFreqTxt->setFont (Font (15.00f, Font::plain));
    LowPeakNotchFreqTxt->setJustificationType (Justification::centredLeft);
    LowPeakNotchFreqTxt->setEditable (false, false, false);
    LowPeakNotchFreqTxt->setColour (TextEditor::textColourId, Colours::black);
    LowPeakNotchFreqTxt->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (800, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

GUI::~GUI()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    HighShelfGain = nullptr;
    HighShelfBand = nullptr;
    HighPeakNotchGain = nullptr;
    HighPeakNotchGainTxt = nullptr;
    HighPeakNotchBand = nullptr;
    HighPeakNotchBandTxt = nullptr;
    MidPeakNotchGain = nullptr;
    MidPeakNotchBand = nullptr;
    LowPeakNotchGain = nullptr;
    LowPeakNotchBand = nullptr;
    LowShelfGain = nullptr;
    LowShelfBand = nullptr;
    HighShelfGainTxt = nullptr;
    HighShelfBandTxt = nullptr;
    LowShelfGainTxt = nullptr;
    LowShelfBandTxt = nullptr;
    MidPeakNotchGainTxt = nullptr;
    MidPeakNotchBandTxt = nullptr;
    LowPeakNotchGainTxt = nullptr;
    LowPeakNotchBandTxt = nullptr;
    HighPeakNotchFreq = nullptr;
    HighPeakNotchFreqTxt = nullptr;
    MidPeakNotchFreq = nullptr;
    MidPeakNotchFreqTxt = nullptr;
    LowPeakNotchFreq = nullptr;
    LowPeakNotchFreqTxt = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void GUI::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void GUI::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    HighShelfGain->setBounds (160, 56, 160, 40);
    HighShelfBand->setBounds (20, 48, 100, 40);
    HighPeakNotchGain->setBounds (160, 160, 160, 40);
    HighPeakNotchGainTxt->setBounds (192, 120, 125, 24);
    HighPeakNotchBand->setBounds (20, 157, 100, 40);
    HighPeakNotchBandTxt->setBounds (7, 120, 170, 24);
    MidPeakNotchGain->setBounds (160, 273, 160, 40);
    MidPeakNotchBand->setBounds (20, 265, 100, 40);
    LowPeakNotchGain->setBounds (160, 383, 160, 40);
    LowPeakNotchBand->setBounds (20, 384, 100, 40);
    LowShelfGain->setBounds (160, 494, 160, 40);
    LowShelfBand->setBounds (20, 496, 100, 40);
    HighShelfGainTxt->setBounds (192, 10, 120, 24);
    HighShelfBandTxt->setBounds (9, 11, 150, 24);
    LowShelfGainTxt->setBounds (203, 451, 110, 24);
    LowShelfBandTxt->setBounds (8, 451, 150, 24);
    MidPeakNotchGainTxt->setBounds (195, 234, 125, 24);
    MidPeakNotchBandTxt->setBounds (8, 234, 170, 24);
    LowPeakNotchGainTxt->setBounds (192, 342, 125, 24);
    LowPeakNotchBandTxt->setBounds (7, 342, 170, 24);
    HighPeakNotchFreq->setBounds (344, 118, 60, 80);
    HighPeakNotchFreqTxt->setBounds (344, 80, 65, 24);
    MidPeakNotchFreq->setBounds (344, 243, 60, 80);
    MidPeakNotchFreqTxt->setBounds (344, 209, 65, 24);
    LowPeakNotchFreq->setBounds (339, 375, 60, 80);
    LowPeakNotchFreqTxt->setBounds (339, 338, 65, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void GUI::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == HighShelfGain)
    {
        //[UserSliderCode_HighShelfGain] -- add your slider handling code here..
        //[/UserSliderCode_HighShelfGain]
    }
    else if (sliderThatWasMoved == HighShelfBand)
    {
        //[UserSliderCode_HighShelfBand] -- add your slider handling code here..
        //[/UserSliderCode_HighShelfBand]
    }
    else if (sliderThatWasMoved == HighPeakNotchGain)
    {
        //[UserSliderCode_HighPeakNotchGain] -- add your slider handling code here..
        //[/UserSliderCode_HighPeakNotchGain]
    }
    else if (sliderThatWasMoved == HighPeakNotchBand)
    {
        //[UserSliderCode_HighPeakNotchBand] -- add your slider handling code here..
        //[/UserSliderCode_HighPeakNotchBand]
    }
    else if (sliderThatWasMoved == MidPeakNotchGain)
    {
        //[UserSliderCode_MidPeakNotchGain] -- add your slider handling code here..
        //[/UserSliderCode_MidPeakNotchGain]
    }
    else if (sliderThatWasMoved == MidPeakNotchBand)
    {
        //[UserSliderCode_MidPeakNotchBand] -- add your slider handling code here..
        //[/UserSliderCode_MidPeakNotchBand]
    }
    else if (sliderThatWasMoved == LowPeakNotchGain)
    {
        //[UserSliderCode_LowPeakNotchGain] -- add your slider handling code here..
        //[/UserSliderCode_LowPeakNotchGain]
    }
    else if (sliderThatWasMoved == LowPeakNotchBand)
    {
        //[UserSliderCode_LowPeakNotchBand] -- add your slider handling code here..
        //[/UserSliderCode_LowPeakNotchBand]
    }
    else if (sliderThatWasMoved == LowShelfGain)
    {
        //[UserSliderCode_LowShelfGain] -- add your slider handling code here..
        //[/UserSliderCode_LowShelfGain]
    }
    else if (sliderThatWasMoved == LowShelfBand)
    {
        //[UserSliderCode_LowShelfBand] -- add your slider handling code here..
        //[/UserSliderCode_LowShelfBand]
    }
    else if (sliderThatWasMoved == HighPeakNotchFreq)
    {
        //[UserSliderCode_HighPeakNotchFreq] -- add your slider handling code here..
        //[/UserSliderCode_HighPeakNotchFreq]
    }
    else if (sliderThatWasMoved == MidPeakNotchFreq)
    {
        //[UserSliderCode_MidPeakNotchFreq] -- add your slider handling code here..
        //[/UserSliderCode_MidPeakNotchFreq]
    }
    else if (sliderThatWasMoved == LowPeakNotchFreq)
    {
        //[UserSliderCode_LowPeakNotchFreq] -- add your slider handling code here..
        //[/UserSliderCode_LowPeakNotchFreq]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GUI" componentName="" parentClasses="public Component"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="800"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <SLIDER name="new slider" id="eb484d71cf53cd94" memberName="HighShelfGain"
          virtualName="unknown" explicitFocusOrder="0" pos="160 56 160 40"
          min="0" max="10" int="0" style="LinearHorizontal" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="23592162c458d8cb" memberName="HighShelfBand"
          virtualName="" explicitFocusOrder="0" pos="20 48 100 40" min="0"
          max="10" int="0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="787d0b0676761046" memberName="HighPeakNotchGain"
          virtualName="unknown" explicitFocusOrder="0" pos="160 160 160 40"
          min="0" max="10" int="0" style="LinearHorizontal" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="b189d783ecd7ee9c" memberName="HighPeakNotchGainTxt"
         virtualName="" explicitFocusOrder="0" pos="192 120 125 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Peak/Notch Filter Gain" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="new slider" id="ae67a6ca5cff6860" memberName="HighPeakNotchBand"
          virtualName="" explicitFocusOrder="0" pos="20 157 100 40" min="0"
          max="10" int="0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new" id="a510a5ec073f699" memberName="HighPeakNotchBandTxt"
         virtualName="" explicitFocusOrder="0" pos="7 120 170 24" edTextCol="ff000000"
         edBkgCol="0" labelText="High Peak/Notch Filter Bandwidth" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="new slider" id="88b4f46e1da80fc1" memberName="MidPeakNotchGain"
          virtualName="unknown" explicitFocusOrder="0" pos="160 273 160 40"
          min="0" max="10" int="0" style="LinearHorizontal" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="8130abebfc0d46c4" memberName="MidPeakNotchBand"
          virtualName="" explicitFocusOrder="0" pos="20 265 100 40" min="0"
          max="10" int="0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="b5d87c2855e9afe9" memberName="LowPeakNotchGain"
          virtualName="unknown" explicitFocusOrder="0" pos="160 383 160 40"
          min="0" max="10" int="0" style="LinearHorizontal" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="712cef980c8914fe" memberName="LowPeakNotchBand"
          virtualName="" explicitFocusOrder="0" pos="20 384 100 40" min="0"
          max="10" int="0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="4da916153ee28f96" memberName="LowShelfGain"
          virtualName="unknown" explicitFocusOrder="0" pos="160 494 160 40"
          min="0" max="10" int="0" style="LinearHorizontal" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="823c0cb713b18779" memberName="LowShelfBand"
          virtualName="" explicitFocusOrder="0" pos="20 496 100 40" min="0"
          max="10" int="0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="e9f3701463cf3000" memberName="HighShelfGainTxt"
         virtualName="" explicitFocusOrder="0" pos="192 10 120 24" edTextCol="ff000000"
         edBkgCol="0" labelText="High Shelf Filter Gain" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="3a51528cd7d0845" memberName="HighShelfBandTxt"
         virtualName="" explicitFocusOrder="0" pos="9 11 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="High Shelf Filter Bandwidth" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="573079c987ecfade" memberName="LowShelfGainTxt"
         virtualName="" explicitFocusOrder="0" pos="203 451 110 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Low Shelf Filter Gain" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="cc14c0632e5a4842" memberName="LowShelfBandTxt"
         virtualName="" explicitFocusOrder="0" pos="8 451 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Low Shelf Filter Bandwidth" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="52abe6b1b5fabfb4" memberName="MidPeakNotchGainTxt"
         virtualName="" explicitFocusOrder="0" pos="195 234 125 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Peak/Notch Filter Gain" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="56bab5aeb84c6ac3" memberName="MidPeakNotchBandTxt"
         virtualName="" explicitFocusOrder="0" pos="8 234 170 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Mid Peak/Notch Filter Bandwidth" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="7c932b5c6f80a8f6" memberName="LowPeakNotchGainTxt"
         virtualName="" explicitFocusOrder="0" pos="192 342 125 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Peak/Notch Filter Gain" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="7962086d2f6b7e4f" memberName="LowPeakNotchBandTxt"
         virtualName="" explicitFocusOrder="0" pos="7 342 170 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Low Peak/Notch Filter Bandwidth" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="new slider" id="9f1f3e2001728b89" memberName="HighPeakNotchFreq"
          virtualName="" explicitFocusOrder="0" pos="344 118 60 80" min="0"
          max="10" int="0" style="LinearVertical" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="b18a900a6a8ad3c6" memberName="HighPeakNotchFreqTxt"
         virtualName="" explicitFocusOrder="0" pos="344 80 65 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Center Freq" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="new slider" id="72d5ab543bd60216" memberName="MidPeakNotchFreq"
          virtualName="" explicitFocusOrder="0" pos="344 243 60 80" min="0"
          max="10" int="0" style="LinearVertical" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="e76512c826cd0ab6" memberName="MidPeakNotchFreqTxt"
         virtualName="" explicitFocusOrder="0" pos="344 209 65 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Center Freq" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="new slider" id="bc5502ced2597fb5" memberName="LowPeakNotchFreq"
          virtualName="" explicitFocusOrder="0" pos="339 375 60 80" min="0"
          max="10" int="0" style="LinearVertical" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="97a190ffb84127b0" memberName="LowPeakNotchFreqTxt"
         virtualName="" explicitFocusOrder="0" pos="339 338 65 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Center Freq" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
