#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <iostream>
#include <stdio.h>

using namespace std;
using namespace cv;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    /// Global variables
    Mat corner_src, corner_gray;
    int corner_thresh = 200;
    int corner_max_thresh = 255;

    char* corner_source_window = "Source image";
    char* corner_corners_window = "Corners detected";

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void cornerDetect(int, void *);

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_horizontalSlider_valueChanged(int value);
    void on_edgeMinSlider_valueChanged(int value);
    void on_edgeMaxSlider_valueChanged(int value);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
