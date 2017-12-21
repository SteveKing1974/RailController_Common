#ifndef JSONKEYS_H
#define JSONKEYS_H

#include <QString>

class JsonKeys {
public:
    static QString get() { return QString("get"); }
    static QString put() { return QString("put"); }

    static QChar seperator() { return QChar(':'); }

    static QString panel() { return QString("panel"); }
    static QString controller() { return QString("controller"); }
    static QString error() { return QString("error"); }

    static QString speed() { return QString("speed"); }
    static QString direction() { return QString("direction"); }
    static QString directionEnabled() { return QString("directionEnabled"); }
    static QString speedEnabled() { return QString("speedEnabled"); }

    static QString nodes() { return QString("nodes"); }
    static QString points() { return QString("points"); }
    static QString isolators() { return QString("isolators"); }

    static QString enabled() { return QString("enabled"); }

    static QString innerLoop() { return QString("innerloop"); }
    static QString outerLoop() { return QString("outerloop"); }
    static QString stationInner() { return QString("stationinner"); }
    static QString stationOuter() { return QString("stationouter"); }

    static QString topSidingDown() { return QString("topsidingdown"); }
    static QString bottomSidingDown() { return QString("bottomsidingdown"); }
    static QString stationSidingDown() { return QString("stationsidingdown"); }
    static QString topSidingUp() { return QString("topsidingup"); }

    static QString stationEntranceCrossoverA() { return QString("stationentrancecrossovera"); }
    static QString stationEntranceCrossoverB() { return QString("stationentrancecrossoverb"); }
    static QString stationEntranceCrossover() { return QString("stationentrancecrossover"); }

    static QString upMainCrossoverA() { return QString("upmaincrossovera"); }
    static QString upMainCrossoverB() { return QString("upmaincrossoverb"); }
    static QString upMainCrossover() { return QString("upmaincrossover"); }

    static QString downMainCrossoverA() { return QString("downmaincrossovera"); }
    static QString downMainCrossoverB() { return QString("downmaincrossoverb"); }
    static QString downMainCrossover() { return QString("downmaincrossover"); }

    static QString upStationCrossoverA() { return QString("upstationcrossovera"); }
    static QString upStationCrossoverB() { return QString("upstationcrossoverb"); }
    static QString upStationCrossover() { return QString("upstationcrossover"); }

    static QString downStationCrossoverA() { return QString("downstationcrossovera"); }
    static QString downStationCrossoverB() { return QString("downstationcrossoverb"); }
    static QString downStationCrossover() { return QString("downstationcrossover"); }

    static QString upSiding1() { return QString("upsiding1"); }
    static QString upSiding2() { return QString("upsiding2"); }

    static QString downSiding1() { return QString("downsiding1"); }
    static QString downSiding2() { return QString("downsiding2"); }

    static QString dummyOuter() { return QString("dummyOuter"); }
    static QString outerRight() { return QString("outerRight"); }
    static QString outerLeft() { return QString("outerLeft"); }
    static QString outerCenter() { return QString("outerCenter"); }
    static QString outerToInnerLeft() { return QString("outerToInnerLeft"); }
    static QString outerToInnerRight() { return QString("outerToInnerRight"); }

    static QString dummyInner() { return QString("dummyInner"); }
    static QString innerBetweenPoints() { return QString("innerBetweenPoints"); }
    static QString innerRight() { return QString("innerRight"); }
    static QString innerLeft() { return QString("innerLeft"); }
    static QString innerCenter() { return QString("innerCenter"); }
    static QString innerToStation() { return QString("innerToStation"); }

    static QString dummyStationOuter() { return QString("dummyStationOuter"); }
    static QString stationOuterBetweenPoints() { return QString("stationOuterBetweenPoints"); }
    static QString stationOuterRight() { return QString("stationOuterRight"); }
    static QString stationOuterLeft() { return QString("stationOuterLeft"); }
    static QString stationOuterCenter() { return QString("stationOuterCenter"); }
    static QString stationSidingRight1() { return QString("stationSidingRight1"); }
    static QString dummyRightBetweenSidings() { return QString("dummyRightBetweenSidings"); }

    static QString stationSidingRight2() { return QString("stationSidingRight2"); }
    static QString stationSidingRight3() { return QString("stationSidingRight3"); }
    static QString stationOuterToInnerLeft() { return QString("stationOuterToInnerLeft"); }
    static QString stationOuterToInnerRight() { return QString("stationOuterToInnerRight"); }

    static QString dummyStationInner() { return QString("dummyStationInner"); }
    static QString stationInnerRight() { return QString("stationInnerRight"); }
    static QString stationInnerCenter() { return QString("stationInnerCenter"); }
    static QString dummyLeftBetweenPoints() { return QString("dummyLeftBetweenPoints"); }
    static QString stationSidingLeft1() { return QString("stationSidingLeft1"); }
    static QString dummyLeftBetweenSidings() { return QString("dummyLeftBetweenSidings"); }
    static QString stationSidingLeft2() { return QString("stationSidingLeft2"); }
    static QString stationSidingLeft3() { return QString("stationSidingLeft3"); }
};

#endif // JSONKEYS_H
