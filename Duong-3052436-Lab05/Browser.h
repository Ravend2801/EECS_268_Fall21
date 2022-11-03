#ifndef BROWSER_H
#define BROWSER_H

#include <stdexcept>
#include <string>



#include "BrowserHistoryInterface.h"
#include "LinkedList.h"

class Browser : public BrowserHistoryInterface
{
protected:
  LinkedList<std::string>* m_list;
  Node<string>* m_current;
  int index;

public:
  Browser();

  /**
         * @pre none
         * @post the browser navigate to the given url
         * @param url, a string representing a URL
         */
  void navigateTo(std::string url);

  /**
         * @pre none
         * @post if possible, the browser navigates forward in the history otherwise it keeps focus
         *         on the current URL
         */
  void forward();

  /**
         * @pre none
         * @post if possible, the browser navigates backwards in the history otherwise it keeps focus
         *         on the current URL 
         */
  void back();

  /**
         * @return the current URL 
         */
  string current() const;

  void copyCurrentHistory();
  ~Browser();
};

#endif
