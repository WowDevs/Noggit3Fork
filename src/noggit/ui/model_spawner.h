#ifndef __NOGGIT_UI_MODEL_SPAWNER_H
#define __NOGGIT_UI_MODEL_SPAWNER_H

#include <QWidget>

class QTreeView;

namespace helper
{
  namespace qt
  {
    class non_recursive_filter_model;
  }
}

namespace noggit
{
  namespace ui
  {
    class model_spawner : public QWidget
    {
    Q_OBJECT

    public:
      model_spawner (QWidget* parent = NULL);

      static const QLatin1String& mime_type();

    private slots:
      void update_filter (const QString& filter);

    private:
      helper::qt::non_recursive_filter_model* _tree_model;
      QTreeView* _file_tree;
    };
  }
}

#endif