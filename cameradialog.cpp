#include "cameradialog.h"
#include "ui_cameradialog.h"

//#include "QList"
//#include "QCamera"
//#include "QCameraInfo"

CameraDialog::CameraDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CameraDialog)
{
    ui->setupUi(this);

//    QList<QCameraInfo> list;
//    list = QCameraInfo::availableCameras();
//    ui->Box_CameraId->clear();
//    for (int i = 0; i < list.size(); i++)
//    {
//        ui->Box_CameraId->addItem(list.at(i).description());
//    }
}

CameraDialog::~CameraDialog()
{
    delete ui;
}

void CameraDialog::on_Btn_Back_clicked()
{
    this->close();
}

//void CameraDialog::on_Box_CameraId_currentIndexChanged(int index)
//{

//}
