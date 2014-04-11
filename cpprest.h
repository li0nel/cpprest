/**
*	Useful functions for consuming REST APIs
*	using 2-legged OAuth2.0 authorization
*
*	@author	Lionel Martin
*	@date	12/04/2014
*/
#include <string>
#include <vector>
#include <map>

namespace CppRest
{
	enum ApiResult
	{
		CPPREST_API_200,
		CPPREST_API_401,
		CPPREST_API_403,
		CPPREST_USER_CANCEL,
		CPPREST_API_SERVERUNREACHABLE
	};

	/**
	* Structure for Wininet HTTP request
	*/
	struct SWinHttpParameters
	{
		std::wstring wszServer;
		std::wstring wszPath;
		bool bUseSSL;
		std::wstring wszVerb;
		std::map<std::wstring,std::wstring> mHeaders;
	};

	CppRest::ApiResult ApiRequest(const CppRest::SWinHttpParameters* const SParams, std::map<std::wstring, std::wstring>& mResponse, bool bLoginUser=true);
}

bool UserLogin(std::wstring& wszOAuthToken);

CppRest::ApiResult GetOAuthToken(const std::wstring& wszEmail, const std::wstring& wszPassword, std::wstring& wszOAuthToken);
