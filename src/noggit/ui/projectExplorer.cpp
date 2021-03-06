// This file is part of Noggit3, licensed under GNU General Public License (version 3).

#include <noggit/ui/projectExplorer.h>

#include <QFileSystemModel>
#include <QTreeView>
#include <QVBoxLayout>

namespace noggit
{
  namespace ui
  {
    projectExplorer::projectExplorer(const QString& projectPath, QWidget* parent)
    : QWidget(parent)
    {
      QVBoxLayout* layout  = new QVBoxLayout(this);
      QFileSystemModel *model = new QFileSystemModel();
      QTreeView *tree = new QTreeView(this);

      model->setRootPath(projectPath);
      tree->setModel(model);
      tree->setRootIndex(model->index(projectPath));
      layout->addWidget(tree);
    }
  }
}
