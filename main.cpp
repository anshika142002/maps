#include <QGuiApplication>
#include <QQmlApplicationEngine>


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/maps/Main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);

//    engine.rootContext()->setContextProperty("my_token","eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJhdWQiOiJmYzI3YTYxZC02MWE4LTQ3YmUtYjA4Ny03NTIwYTc4ZDJhYTAiLCJleHAiOjE3MTgzODk4MDAsImlzcyI6IkdlbmVyYWwgTWFnaWMiLCJqdGkiOiJlZDYwYTM3NC1lZjQ0LTQ0MGMtYWYwYi1iNGRiNWFhMzYyOWYiLCJuYmYiOjE2OTc0NTQ2MzZ9.PunhaTE-2aAXlUT8whHlYpfPfbqL4sak7RuKtRZ78_iXxdlFGp-IUaO9nsZcqu06yn26g1UIKRGFaGoPmkeVYA");

    engine.load(url);

    return app.exec();
}
