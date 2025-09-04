#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QPushButton btn("Hello, Qt!");
    btn.resize(240, 120);
    btn.show();

    return app.exec();
}
