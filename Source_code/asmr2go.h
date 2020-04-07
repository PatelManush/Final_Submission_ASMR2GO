#ifndef ASMR2GO_H
#define ASMR2GO_H

#include <QMainWindow>//Library to build main window 
#include <QMediaPlayer> //Library to play music 
#include <QMediaPlaylist>//Library to interface with other devices
#include <QAudioRecorder> //Library to record music 
#include "ui_mainwindow.h" //header to generate .ui file for home page QT5 wizard generation

namespace Ui {
class ASMR2Go;
}

class ASMR2Go : public QMainWindow
{
    Q_OBJECT

public:
    explicit ASMR2Go(QWidget *parent = 0);
    ~ASMR2Go();

private:
    Ui::MainWindow *ui;
    QAudioRecorder *rec_1 = nullptr;
    QAudioRecorder *rec_2 = nullptr;
    QAudioRecorder *rec_3 = nullptr;
    QAudioRecorder *rec_4 = nullptr;
    QMediaPlayer *play_1 = nullptr;
    QMediaPlayer *play_2 = nullptr;
    QMediaPlayer *play_3 = nullptr;
    QMediaPlayer *play_4 = nullptr;
    QMediaPlayer *play_5 = nullptr;
    QMediaPlayer *play_6 = nullptr;
    QMediaPlayer *play_7 = nullptr;
    QMediaPlayer *play_8 = nullptr;

private slots:
    void recordMusic1()
    {
        switch (rec_1->state()) {
        case QAudioRecorder::RecordingState:
            rec_1->stop();
            break;
        case QAudioRecorder::PausedState:
        case QAudioRecorder::StoppedState:
            QAudioEncoderSettings audioSettings;
            audioSettings.setCodec("audio/amr");
            audioSettings.setQuality(QMultimedia::HighQuality);
            rec_1->setEncodingSettings(audioSettings);
            rec_1->setOutputLocation(QUrl::fromLocalFile("/home/pi/Music/song1.amr"));
            rec_1->record();
            break;
        }
    }
    void recordMusic2()
    {
        switch (rec_2->state()) {
        case QAudioRecorder::RecordingState:
            rec_2->stop();
            break;
        case QAudioRecorder::PausedState:
        case QAudioRecorder::StoppedState:
            QAudioEncoderSettings audioSettings;
            audioSettings.setCodec("audio/amr");
            audioSettings.setQuality(QMultimedia::HighQuality);
            rec_2->setEncodingSettings(audioSettings);
            rec_2->setOutputLocation(QUrl::fromLocalFile("/home/pi/Music/song2.amr"));
            rec_2->record();
            break;
        }
    }
    void recordMusic3()
    {
        switch (rec_3->state()) {
        case QAudioRecorder::RecordingState:
            rec_3->stop();
            break;
        case QAudioRecorder::PausedState:
        case QAudioRecorder::StoppedState:
            QAudioEncoderSettings audioSettings;
            audioSettings.setCodec("audio/amr");
            audioSettings.setQuality(QMultimedia::HighQuality);
            rec_3->setEncodingSettings(audioSettings);
            rec_3->setOutputLocation(QUrl::fromLocalFile("/home/pi/Music/song3.amr"));
            rec_3->record();
            break;
        }
    }
    void recordMusic4()
    {
        switch (rec_4->state()) {
        case QAudioRecorder::RecordingState:
            rec_4->stop();
            break;
        case QAudioRecorder::PausedState:
        case QAudioRecorder::StoppedState:
            QAudioEncoderSettings audioSettings;
            audioSettings.setCodec("audio/amr");
            audioSettings.setQuality(QMultimedia::HighQuality);
            rec_4->setEncodingSettings(audioSettings);
            rec_4->setOutputLocation(QUrl::fromLocalFile("/home/pi/Music/song4.amr"));
            rec_4->record();
            break;
        }
    }
#endif // ASMR2GO_H