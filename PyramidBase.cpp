#include "PyramidBase.h"
#include "ui_PyramidBase.h"
#include "choosetype.h"
#include "built.h"
#include "pyramidrectangle.h"
#include "pyramidtriangle.h"

ChooseType *choosetype2;
Built *built4;
PyramidRectangle *pyramidrectangle2;
PyramidTriangle *pyramidtriangle;

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


void PyramidBase::on_TrapezeButton_clicked()
{
    hide();
    built4 = new Built(this);
    built4 -> show();
}


void PyramidBase::on_ParallelogramButton_clicked()
{
    hide();
    built4 = new Built(this);
    built4 -> show();
}

