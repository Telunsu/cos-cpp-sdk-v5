#ifndef STRING_UTIL_H
#define STRING_UTIL_H

#include <stdint.h>

#include <string>

#include "rapidxml/1.13/rapidxml.hpp"
#include "rapidxml/1.13/rapidxml_utils.hpp"
#include "rapidxml/1.13/rapidxml_print.hpp"

namespace qcloud_cos{

class StringUtil {
public:
    /**
     * @brief 去除string两端的空格
     *
     * @param s: 待去除空格的字符串，是入参也是出参
     *
     * @return 返回去除空格后的字符串,即s
     */
    static std::string& Trim(std::string& s);

    /**
     * @brief 将xml转为string
     *
     * @param xmlObject 需要转换xml对象
     *
     * @return 返回转换后的string
     */
    static std::string XmlToString(const rapidxml::xml_document<>& xml_doc);

    /**
     * @brief 将string转换为xml
     *
     * @param xmlStr 待转换的string对象
     * @param doc    待返回的xml对象[out]
     *
     * @return 转换成功返回true,否则返回false
     */
    static bool StringToXml(const std::string& xml_str, rapidxml::xml_document<>* doc);

    /**
     * @brief 把uint64_t类型的num转换成std::string,长度为8个字节
     *
     * @param num uint64_t类型
     *
     * @return 转换后的string
     */
    static std::string Uint64ToString(uint64_t num);

    /**
     * @brief 将int转为string
     *
     * @param num int类型
     *
     * @return 转换后的string
     */
    static std::string IntToString(int num);

    /**
     * @brief 字符串就地转成全大写
     *
     * @param s 指向string类型的指针
     *
     * @return void
     */
    static void StringToUpper(std::string* s);

    /**
     * @brief 字符串转成全大写
     *
     * @param s string类型的常引用
     *
     * @return 全大写字符串
     */
    static std::string StringToUpper(const std::string& s);

    /**
     * @brief 字符串就地转成全小写
     *
     * @param s 指向string类型的指针
     *
     * @return void
     */
    static void StringToLower(std::string* s);

    /**
     * @brief 字符串转成全小写
     *
     * @param s string类型的常引用
     *
     * @return 全大写字符串
     */
    static std::string StringToLower(const std::string& s);

    /**
     * @brief 字符串连接
     *
     * @param str_vec 字符串vector
     * @param delimiter 分隔符
     *
     * @return 字符串
     */
    static std::string JoinStrings(const std::vector<std::string>& str_vec,
                                   const std::string& delimiter);

    /**
     * @brief 将string转为uint64_t
     *
     * @param str string类型
     *
     * @return 转换后的uint64_t
     */
    static uint64_t StringToUint64(const std::string& str);

    /**
     * @brief 判断字符串是否以指定前缀开头
     *
     * @param str string类型
     * @param prefix string类型
     *
     * @return str的前缀为prefix,则返回true;反之,返回false
     */
    static bool StringStartsWith(const std::string& str, const std::string& prefix);

    /**
     * @brief 判断字符串是否以指定前缀开头(忽略大小写)
     *
     * @param str string类型
     * @param prefix string类型
     *
     * @return str的前缀为prefix,则返回true;反之,返回false
     */
    static bool StringStartsWithIgnoreCase(const std::string& str, const std::string& prefix);

    /**
     * @brief 移除前缀
     *
     * @param str string类型
     * @param prefix string类型
     *
     * @return 返回移除了prefix前缀的字符串
     */
    static std::string StringRemovePrefix(const std::string& str, const std::string& prefix);
};
}

#endif
