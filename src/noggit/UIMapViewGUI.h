// This file is part of Noggit3, licensed under GNU General Public License (version 3).

#pragma once

class UIToolbar;
class UIStatusBar;
class QTextEdit;
class minimap_widget;
class UIZoneIDBrowser;
class MapView;
class UIFrame;
class UITexturePicker;
class UITextureSwitcher;
class World;

#include <noggit/UIFrame.h>

//! \todo Give better name.
class UIMapViewGUI : public UIFrame
{
public:
  explicit UIMapViewGUI( World* world, MapView* setMapview, float xres, float yres);
  // Editor paramter
  int ground_edit_mode;
  int selection_view_mode;

  MapView* theMapview;
  // UI elements
  UIFrame* TexturePalette;
  UIFrame* SelectedTexture;
  UIToolbar* guiToolbar;
  UIStatusBar* guiStatusbar;
  QTextEdit* guidetailInfos;
  UIZoneIDBrowser* ZoneIDBrowser;
  UITexturePicker* TexturePicker;
  UITextureSwitcher* TextureSwitcher;

  void setTilemode( bool enabled );
  virtual void render() const;

private:
  World* _world;
};
