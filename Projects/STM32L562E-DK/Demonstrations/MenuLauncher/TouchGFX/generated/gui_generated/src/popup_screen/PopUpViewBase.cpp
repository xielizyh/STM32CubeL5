/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/popup_screen/PopUpViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

PopUpViewBase::PopUpViewBase()
{
    background.setPosition(0, 0, 240, 240);
    background.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 18, 18));
    background.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
    background.setBorderSize(2);

    top_border.setPosition(0, 0, 240, 30);
    top_border.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    top_border.setAlpha(76);

    bot_border.setPosition(0, 185, 240, 55);
    bot_border.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    bot_border.setAlpha(76);

    sw1_pic.setXY(0, 27);
    sw1_pic.setBitmap(touchgfx::Bitmap(BITMAP_SW1_PIC_ID));

    userMessage.setPosition(0, 184, 240, 56);
    userMessage.setColor(touchgfx::Color::getColorFrom24BitRGB(244, 244, 244));
    userMessage.setLinespacing(0);
    userMessage.setTypedText(touchgfx::TypedText(T_SINGLEUSEID7));

    warningText.setPosition(0, 0, 240, 27);
    warningText.setColor(touchgfx::Color::getColorFrom24BitRGB(239, 255, 0));
    warningText.setLinespacing(0);
    warningText.setTypedText(touchgfx::TypedText(T_SINGLEUSEID8));

    add(background);
    add(top_border);
    add(bot_border);
    add(sw1_pic);
    add(userMessage);
    add(warningText);
}

void PopUpViewBase::setupScreen()
{

}
