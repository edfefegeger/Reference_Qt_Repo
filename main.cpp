#include <QGuiApplication>

int main(int argc, char *argv[])
{
    // Установите атрибут перед созданием экземпляра QGuiApplication
    QCoreApplication::setAttribute(Qt::AA_ShareOpenGLContexts);

    QGuiApplication app(argc, argv);


    return app.exec();
}
