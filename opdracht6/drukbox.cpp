#include "QTextBrowser"
#include "drukbox.h"

Drukbox::Drukbox(QTextBrowser * a) : browser(a)
{}

void Drukbox::toonText(string s)
{
    browser->append(QString::fromStdString(s));
}

void Drukbox::clearMedium()
{
    browser->clear();
}
