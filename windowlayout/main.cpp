#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    QWidget window;
    QLabel *label = new QLabel(QObject::tr("Name:"));
    QLineEdit *lineEdit = new QLineEdit();

    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(label);
    layout->addWidget(lineEdit);
    window.setLayout(layout);
    window.setWindowTitle(QObject::tr("Window layout"));
    window.show();
    return app.exec();
}
