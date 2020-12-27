#ifndef __IPINFO__INFORMER__HPP__
    #define __IPINFO__INFORMER__HPP__

    #include <cstdint>
    #include <string>

    #include "ipinfo_types.hpp"
    #include "ipinfo_values.hpp"
    #include "ipinfo_requester.hpp"
    #include "ipinfo_parser.hpp"
    #include "ipinfo_utiler.hpp"

    namespace ipinfo
    {
        class informer : private __requester,
                         private __parser,
                         private __utiler
        {
            private:
                __info_t        __info;
                std::uint8_t    __conn_num;
                std::string     __ip;
                std::string     __lang;

            public:
                informer(void);

                informer(const std::string &ip,
                         const std::string &lang_name,
                         const std::uint8_t conn_num);

                informer(const std::string &ip,
                         const std::uint8_t &lang_id,
                         const std::uint8_t conn_num);

                void    set_ip(const std::string &ip);
                void    set_lang(const std::string &lang_name);
                void    set_lang(const std::uint8_t lang_id);
                void    set_conn_num(const std::uint8_t n);

                void    run(void);

                // default getters
                std::string     get_ip(void) const;
                std::string     get_ip_type(void) const;
                std::string     get_continent(void) const;
                std::string     get_continent_code(void) const;
                std::string     get_country(void) const;
                std::string     get_country_code(void) const;
                std::string     get_country_capital(void) const;
                std::string     get_country_ph_code(void) const;
                std::string     get_country_neighbors(void) const;
                std::string     get_region(void) const;
                std::string     get_region_code(void) const;
                std::string     get_city(void) const;
                std::string     get_city_district(void) const;
                std::string     get_zip_code(void) const;
                double          get_latitude(void) const;
                double          get_longitude(void) const;
                std::string     get_timezone(void) const;
                std::string     get_city_timezone(void) const;
                std::string     get_timezone_gmt(void) const;
                std::int32_t    get_gmt_offset(void) const;
                std::int32_t    get_dst_offset(void) const;
                std::string     get_isp(void) const;
                std::string     get_as(void) const;
                std::string     get_org(void) const;
                std::string     get_reverse_dns(void) const;
                bool            get_hosting_status(void) const;
                bool            get_proxy_status(void) const;
                bool            get_mobile_status(void) const;
                std::string     get_currency(void) const;
                std::string     get_currency_code(void) const;
                std::string     get_currency_symbol(void) const;
                double          get_currency_rates(void) const;
                std::string     get_currency_plural(void) const;

                // extra information getters
                user_node<std::string>  get_ip_ex(void) const;
                user_node<std::string>  get_ip_type_ex(void) const;
                user_node<std::string>  get_continent_ex(void) const;
                user_node<std::string>  get_continent_code_ex(void) const;
                user_node<std::string>  get_country_ex(void) const;
                user_node<std::string>  get_country_code_ex(void) const;
                user_node<std::string>  get_country_capital_ex(void) const;
                user_node<std::string>  get_country_ph_code_ex(void) const;
                user_node<std::string>  get_country_neighbors_ex(void) const;
                user_node<std::string>  get_region_ex(void) const;
                user_node<std::string>  get_region_code_ex(void) const;
                user_node<std::string>  get_city_ex(void) const;
                user_node<std::string>  get_city_district_ex(void) const;
                user_node<std::string>  get_zip_code_ex(void) const;
                user_node<double>       get_latitude_ex(void) const;
                user_node<double>       get_longitude_ex(void) const;
                user_node<std::string>  get_timezone_ex(void) const;
                user_node<std::string>  get_city_timezone_ex(void) const;
                user_node<std::string>  get_timezone_gmt_ex(void) const;
                user_node<std::int32_t> get_gmt_offset_ex(void) const;
                user_node<std::int32_t> get_dst_offset_ex(void) const;
                user_node<std::string>  get_isp_ex(void) const;
                user_node<std::string>  get_as_ex(void) const;
                user_node<std::string>  get_org_ex(void) const;
                user_node<std::string>  get_reverse_dns_ex(void) const;
                user_node<bool>         get_hosting_status_ex(void) const;
                user_node<bool>         get_proxy_status_ex(void) const;
                user_node<bool>         get_mobile_status_ex(void) const;
                user_node<std::string>  get_currency_ex(void) const;
                user_node<std::string>  get_currency_code_ex(void) const;
                user_node<std::string>  get_currency_symbol_ex(void) const;
                user_node<double>       get_currency_rates_ex(void) const;
                user_node<std::string>  get_currency_plural_ex(void) const;
        };
    }
#endif
