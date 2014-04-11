#include "windows.h"
#include "cpprest.h"

int main()
{
	

	CppRest::SWinHttpParameters SParams;
	SParams.wszServer.assign(L"localhost");
	SParams.wszPath.assign(L"/license/17");
	SParams.bUseSSL = false;
	SParams.wszVerb.assign(L"GET");
	SParams.

	bool bUseSSL;
	std::wstring wszVerb;
	std::map<std::wstring, std::wstring> mHeaders;
};

	CppRest::ApiResult ApiRequest(const CppRest::SWinHttpParameters* const SParams, std::map<std::wstring, std::wstring>& mResponse, bool bLoginUser = true);

}