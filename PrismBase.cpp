#include "PrismBase.h"
#include "ui_PrismBase.h"
#include "choosetype.h"
#include "built.h"
#include "prismrectangle.h"
#include "prismtriangle.h"
#include "prismpentagon.h"
#include "prismhexagon.h"

ChooseType *choosetype1;
Built *built3;
PrismRectangle *prismrectangle2;
PrismBase *prismtriangle;
PrismPentagon *prismpentagon2;
PrismHexagon *prismhexagon2;

PrismBase::PrismBase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrismBase)
{
    ui->setupUi(this);
}

PrismBase::~PrismBase()
{
    delete ui;
}

void PrismBase::on_backButton_clicked()
{
    hide();
    choosetype1 = new ChooseType(this);
    choosetype1 -> show();
}


void PrismBase::on_RectangleButton_clicked()
{
    hide();
    prismrectangle2 = new PrismRectangle(this);
    prismrectangle2 -> show();
}


void PrismBase::on_TriangleButton_clicked()
{
    hide();
    prismtriangle = new PrismTriangle(this);
    prismtriangle -> show();
}


void PrismBase::on_PentagonButton_clicked()
{
    hide();
    prismpentagon2 = new PrismPentagon(this);
    prismpentagon2 -> show();
}


void PrismBase::on_HexagonButton_clicked()
{
    hide();
    prismhexagon2 = new PrismHexagon(this);
    prismhexagon2 -> show();
}

