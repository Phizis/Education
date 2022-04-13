#include <QApplication>
#include <QSpinBox>
#include <QSlider>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    auto *slider = new QSlider(Qt::Horizontal);
    auto *spinbox = new QSpinBox();
    slider->setMinimum(0);
    slider->setMaximum(100);
    spinbox->setMinimum(0);
    spinbox->setMaximum(100);

    QObject::connect(slider, &QSlider::valueChanged, spinbox, &QSpinBox::setValue);
    QObject::connect(spinbox, QOverload<int>::of(&QSpinBox::valueChanged), slider, &QSlider::setValue);

    slider->resize(200, 50);
    spinbox->resize(100, 50);
    spinbox->move(900,500);
    slider->move(900, 400);

    slider->show();
    spinbox->show();

    app.exec();
}
