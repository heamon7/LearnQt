#include <QtWidgets>

//注意第二个参数是char
int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    QWidget window;
    window.resize(320,240);
    //注意tr()函数前面有命名空间
    window.setWindowTitle(QObject::tr("Child widgets"));
    window.show();

    QPushButton *button = new QPushButton(QObject::tr("Press me"),&window);
    button->move(100,100);
    button->show();
    return app.exec();
}
