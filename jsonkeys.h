#ifndef JSONKEYS_H
#define JSONKEYS_H

#include <QString>
#include <QObject>


class JsonKeys : public QObject {
    Q_OBJECT

public:

    Q_INVOKABLE static QString command() { return QString("command"); }
    Q_INVOKABLE static QString data() { return QString("data"); }

    Q_INVOKABLE static QString put() { return QString("put"); }
    Q_INVOKABLE static QString get() { return QString("get"); }

    Q_INVOKABLE  static QString panel() { return QString("panel"); }
    Q_INVOKABLE  static QString controller() { return QString("controller"); }
    Q_INVOKABLE  static QString error() { return QString("error"); }

    Q_INVOKABLE  static QString speed() { return QString("speed"); }
    Q_INVOKABLE  static QString direction() { return QString("direction"); }
    Q_INVOKABLE  static QString controllerState() { return QString("controllerState"); }

    Q_INVOKABLE  static QString nodes() { return QString("nodes"); }
    Q_INVOKABLE  static QString points() { return QString("points"); }
    Q_INVOKABLE  static QString isolators() { return QString("isolators"); }

    Q_INVOKABLE  static QString enabled() { return QString("enabled"); }

    Q_INVOKABLE  static QString innerLoop() { return QString("innerloop"); }
    Q_INVOKABLE  static QString outerLoop() { return QString("outerloop"); }
    Q_INVOKABLE  static QString stationInner() { return QString("stationinner"); }
    Q_INVOKABLE  static QString stationOuter() { return QString("stationouter"); }

    Q_INVOKABLE  static QString topSidingDown() { return QString("topsidingdown"); }
    Q_INVOKABLE  static QString bottomSidingDown() { return QString("bottomsidingdown"); }
    Q_INVOKABLE  static QString stationSidingDown() { return QString("stationsidingdown"); }
    Q_INVOKABLE  static QString topSidingUp() { return QString("topsidingup"); }

    Q_INVOKABLE  static QString stationEntranceCrossoverA() { return QString("stationentrancecrossovera"); }
    Q_INVOKABLE  static QString stationEntranceCrossoverB() { return QString("stationentrancecrossoverb"); }
    Q_INVOKABLE  static QString stationEntranceCrossover() { return QString("stationentrancecrossover"); }

    Q_INVOKABLE  static QString upMainCrossoverA() { return QString("upmaincrossovera"); }
    Q_INVOKABLE  static QString upMainCrossoverB() { return QString("upmaincrossoverb"); }
    Q_INVOKABLE  static QString upMainCrossover() { return QString("upmaincrossover"); }

    Q_INVOKABLE  static QString downMainCrossoverA() { return QString("downmaincrossovera"); }
    Q_INVOKABLE  static QString downMainCrossoverB() { return QString("downmaincrossoverb"); }
    Q_INVOKABLE  static QString downMainCrossover() { return QString("downmaincrossover"); }

    Q_INVOKABLE  static QString upStationCrossoverA() { return QString("upstationcrossovera"); }
    Q_INVOKABLE  static QString upStationCrossoverB() { return QString("upstationcrossoverb"); }
    Q_INVOKABLE  static QString upStationCrossover() { return QString("upstationcrossover"); }

    Q_INVOKABLE  static QString downStationCrossoverA() { return QString("downstationcrossovera"); }
    Q_INVOKABLE  static QString downStationCrossoverB() { return QString("downstationcrossoverb"); }
    Q_INVOKABLE  static QString downStationCrossover() { return QString("downstationcrossover"); }

    Q_INVOKABLE  static QString upSiding1() { return QString("upsiding1"); }
    Q_INVOKABLE  static QString upSiding2() { return QString("upsiding2"); }

    Q_INVOKABLE  static QString downSiding1() { return QString("downsiding1"); }
    Q_INVOKABLE  static QString downSiding2() { return QString("downsiding2"); }

    Q_INVOKABLE  static QString dummyOuter() { return QString("dummyOuter"); }
    Q_INVOKABLE  static QString outerRight() { return QString("outerRight"); }
    Q_INVOKABLE  static QString outerLeft() { return QString("outerLeft"); }
    Q_INVOKABLE  static QString outerCenter() { return QString("outerCenter"); }
    Q_INVOKABLE  static QString outerToInnerLeft() { return QString("outerToInnerLeft"); }
    Q_INVOKABLE  static QString outerToInnerRight() { return QString("outerToInnerRight"); }

    Q_INVOKABLE  static QString dummyInner() { return QString("dummyInner"); }
    Q_INVOKABLE  static QString innerBetweenPoints() { return QString("innerBetweenPoints"); }
    Q_INVOKABLE  static QString innerRight() { return QString("innerRight"); }
    Q_INVOKABLE  static QString innerLeft() { return QString("innerLeft"); }
    Q_INVOKABLE  static QString innerCenter() { return QString("innerCenter"); }
    Q_INVOKABLE  static QString innerToStation() { return QString("innerToStation"); }

    Q_INVOKABLE  static QString dummyStationOuter() { return QString("dummyStationOuter"); }
    Q_INVOKABLE  static QString stationOuterBetweenPoints() { return QString("stationOuterBetweenPoints"); }
    Q_INVOKABLE  static QString stationOuterRight() { return QString("stationOuterRight"); }
    Q_INVOKABLE  static QString stationOuterLeft() { return QString("stationOuterLeft"); }
    Q_INVOKABLE  static QString stationOuterCenter() { return QString("stationOuterCenter"); }
    Q_INVOKABLE  static QString stationSidingRight1() { return QString("stationSidingRight1"); }
    Q_INVOKABLE  static QString dummyRightBetweenSidings() { return QString("dummyRightBetweenSidings"); }

    Q_INVOKABLE  static QString stationSidingRight2() { return QString("stationSidingRight2"); }
    Q_INVOKABLE  static QString stationSidingRight3() { return QString("stationSidingRight3"); }
    Q_INVOKABLE  static QString stationOuterToInnerLeft() { return QString("stationOuterToInnerLeft"); }
    Q_INVOKABLE  static QString stationOuterToInnerRight() { return QString("stationOuterToInnerRight"); }

    Q_INVOKABLE  static QString dummyStationInner() { return QString("dummyStationInner"); }
    Q_INVOKABLE  static QString stationInnerRight() { return QString("stationInnerRight"); }
    Q_INVOKABLE  static QString stationInnerCenter() { return QString("stationInnerCenter"); }
    Q_INVOKABLE  static QString dummyLeftBetweenPoints() { return QString("dummyLeftBetweenPoints"); }
    Q_INVOKABLE  static QString stationSidingLeft1() { return QString("stationSidingLeft1"); }
    Q_INVOKABLE  static QString dummyLeftBetweenSidings() { return QString("dummyLeftBetweenSidings"); }
    Q_INVOKABLE  static QString stationSidingLeft2() { return QString("stationSidingLeft2"); }
    Q_INVOKABLE  static QString stationSidingLeft3() { return QString("stationSidingLeft3"); }
};

#endif // JSONKEYS_H
