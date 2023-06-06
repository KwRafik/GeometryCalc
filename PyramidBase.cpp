#include "PyramidBase.h"
#include "ui_PyramidBase.h"
#include "choosetype.h"
#include "built.h"
#include "pyramidrectangle.h"
#include "pyramidtriangle.h"
#include "pyramidpentagon.h"
#include "pyramidhexagon.h"

ChooseType *choosetype2;
Built *built4;
PyramidRectangle *pyramidrectangle2;
PyramidTriangle *pyramidtriangle;
PyramidPentagon *pyramidpentagon2;
PyramidHexagon *pyramidhexagon2;

PyramidBase::PyramidBase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PyramidBase)
{
    ui->setupUi(this);
}

PyramidBase::~PyramidBase()
{
    delete ui;
}

void PyramidBase::on_backButton_clicked()
{
    hide();
    choosetype2 = new ChooseType(this);
    choosetype2 -> show();
}


void PyramidBase::on_TriangleButton_clicked()
{
    hide();
    pyramidtriangle = new PyramidTriangle(this);
    pyramidtriangle -> show();
}


void PyramidBase::on_RectangleButton_clicked()
{
    hide();
    pyramidrectangle2 = new PyramidRectangle(this);
    pyramidrectangle2 -> show();
}


void PyramidBase::on_PentagonButton_clicked()
{
    hide();
    pyramidpentagon2 = new PyramidPentagon(this);
    pyramidpentagon2 -> show();
}


void PyramidBase::on_HexagonButton_clicked()
{
    hide();
    pyramidhexagon2 = new PyramidHexagon(this);
    pyramidhexagon2 -> show();
}

