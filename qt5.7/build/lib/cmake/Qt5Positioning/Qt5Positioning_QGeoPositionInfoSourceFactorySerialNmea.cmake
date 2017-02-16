
add_library(Qt5::QGeoPositionInfoSourceFactorySerialNmea MODULE IMPORTED)

_populate_Positioning_plugin_properties(QGeoPositionInfoSourceFactorySerialNmea RELEASE "position/qtposition_serialnmea.dll")
_populate_Positioning_plugin_properties(QGeoPositionInfoSourceFactorySerialNmea DEBUG "position/qtposition_serialnmead.dll")

list(APPEND Qt5Positioning_PLUGINS Qt5::QGeoPositionInfoSourceFactorySerialNmea)
