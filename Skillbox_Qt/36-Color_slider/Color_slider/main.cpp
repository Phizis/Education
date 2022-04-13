#include <QApplication>
#include <QPixmap>
#include <QPaintEvent>
#include <QPainter>
#include <QVBoxLayout>
#include <QSlider>

class ImageCircle : public QSlider{
    Q_OBJECT
public:
    ImageCircle()=default;
    ImageCircle(QWidget *parent);
    void paintEvent(QPaintEvent *e) override;
    QSize minimumSizeHint() const override;

public slots:
    void setRed();
    void setGreen();
    void setYellow();

private:
    QPixmap mCurrentCircle;
    QPixmap mRedCircle;
    QPixmap mGreenCircle;
    QPixmap mYellowCircle;
};

ImageCircle::ImageCircle(QWidget *parent) {
    setParent(parent);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    mRedCircle = QPixmap("C:\\Users\\Roman\\CLionProjects\\Color_slider\\red.png");
    mGreenCircle = QPixmap("C:\\Users\\Roman\\CLionProjects\\Color_slider\\green.png");
    mYellowCircle = QPixmap("C:\\Users\\Roman\\CLionProjects\\Color_slider\\yellow.png");

    mCurrentCircle = mRedCircle;
    setGeometry(mCurrentCircle.rect());
}

void ImageCircle::paintEvent(QPaintEvent *e) {
    QPainter p(this);
    p.drawPixmap(e->rect(), mCurrentCircle);
}

QSize ImageCircle::minimumSizeHint() const {
    return sizeHint();
}

void ImageCircle::setRed(){
    mCurrentCircle = mRedCircle;
    update();
}
void ImageCircle::setGreen() {
    mCurrentCircle = mGreenCircle;
    update();
}
void ImageCircle::setYellow() {
    mCurrentCircle = mYellowCircle;
    update();
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget *window = new QWidget;
    ImageCircle circle(nullptr);
    circle.setFixedSize(200, 200);

    QSlider *slider = new QSlider(Qt::Horizontal, window);
    slider->setMinimum(0);
    slider->setMaximum(100);

    QObject::connect(slider, &QSlider::valueChanged, [&slider, &circle](int newValue=0){
        if(newValue<33)
            circle.setRed();
        if(newValue>=33 and newValue<=66)
            circle.setGreen();
        if(newValue>66)
            circle.setYellow();
    });

    auto *layout = new QVBoxLayout(window);
    layout->addWidget(slider);
    layout->addWidget(&circle);

    window->resize(300,300);
    window->move(1000,400);
    window->show();

    app.exec();
}
#include "main.moc"