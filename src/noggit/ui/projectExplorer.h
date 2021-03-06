// This file is part of Noggit3, licensed under GNU General Public License (version 3).

#pragma once

#include <QWidget>

namespace noggit
{
  namespace ui
  {
    class projectExplorer : public QWidget
    {
      Q_OBJECT

    public:
      explicit projectExplorer(const QString& projectPath, QWidget* parent = 0);
    };
  }
}
