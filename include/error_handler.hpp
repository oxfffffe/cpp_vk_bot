#pragma once

#include <stdexcept>

namespace bot
{
/*!
 * @brief Class that represents handling of VK API errors.
 */
class Vk_error : public std::exception
{
protected:
  /*!
   * @brief An error code.
   */
  long _code;

public:
  /*!
   * @brief Vk_error constructor.
   * @param An error code.
   */
  explicit Vk_error(long code) noexcept
    : _code(code)
  { }

  /*!
   * @brief ~Vk_error
   */
  virtual ~Vk_error() noexcept
  { }

  /*!
   * @overload const char* Vk_error::what()
   * @throws std::exception
   * @return Error message.
   */
  virtual const char* what() const noexcept override
  {
    switch (_code)
    {
      case 1:
        return "Unknown error";

      case 2:
        return "App disabled";

      case 3:
        return "Unknown method";

      case 5:
        return "Authorization failed";

      case 6:
        return "Requestes per second limit exceeded";

      case 7:
        return "Permission denied";

      case 10:
        return "Internal server error";

      case 14:
        return "Captcha needed";

      case 15:
        return "Access denied";

      case 16:
        return "HTTP authorization failed";

      case 23:
        return "Method disabled";

      case 27:
        return "Community access token is invalid";

      case 28:
        return "Application access token is invalid";

      case 29:
        return "Method call limit reached";

      default:
        return "***Unknown***";
    }
  }
};
} //namespace bot
