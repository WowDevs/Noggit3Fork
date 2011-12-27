#ifndef __SETTINGS_H
#define __SETTINGS_H

class QSettings;

class Settings
{
public:
  static Settings* getInstance();

  bool copy_rot;      // True = Random rotation on model insert.
  bool copy_tile;      // True = Random tileing on model insert.
  bool copy_size;      // True = Random sizing on model insert.
  bool copy_autoselect;  //

  int FarZ;        // the far clipping value

  bool AutoSelectingMode;  // true activates auto selection when you deselect a model. False not.
  bool holelinesOn;    // If true show the blue subchunk lines always. Not only in holemode is on.

  const bool& noAntiAliasing() const;

private:
  bool _noAntiAliasing;

  Settings();
  static Settings* instance;

  QSettings* _settings;
};

#endif