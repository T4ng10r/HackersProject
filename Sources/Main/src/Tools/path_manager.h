#pragma once
#include <string>

class path_manager
{
public:

	path_manager()
	{
	};

	std::string get_data_path() { return std::string(); }

}
//	inline const char *GetDataDir(void) { return m_szDataDir; };
//	inline const char *GetWorkingDir(void) { return m_szWorkingDir; };
//	inline const char *GetSaveDir(void)
//	{
//		PathAbsoluteFromWorkingDir(m_szTemp, m_szSaveDir, faDirectory);
//		return m_szTemp;
//	}
//	inline const char *GetTempDir(void)
//	{
//		PathAbsoluteFromWorkingDir(m_szTemp, m_szTempDir, faDirectory);
//		return m_szTemp;
//	}
//
//	inline bool PathRelativFromDataDir(char *szRelativ, const char *szTo, int iAttrib)
//	{
//		return PathRelativToPathFromPath(szRelativ, szTo, iAttrib, m_szDataDir, faDirectory);
//	}
//	inline bool PathRelativFromWorkingDir(char *szRelativ, const char *szTo, int iAttrib)
//	{
//		return PathRelativToPathFromPath(szRelativ, szTo, iAttrib, m_szWorkingDir, faDirectory);
//	}
//
//	inline bool PathAbsoluteFromDataDir(char *szAbsolute, const char *szTo, int iAttrib)
//	{
//		return PathAbsoluteToPathFromPath(szAbsolute, szTo, iAttrib, m_szDataDir, faDirectory);
//	}
//	inline bool PathAbsoluteFromWorkingDir(char *szAbsolute, const char *szTo, int iAttrib)
//	{
//		return PathAbsoluteToPathFromPath(szAbsolute, szTo, iAttrib, m_szWorkingDir, faDirectory);
//	}
//
//	static bool PathRelativToPathFromPath(char *szRelativ, const char *szTo, int iAttribTo, const char *szFrom, int iAttribFrom);
//	static bool PathAbsoluteToPathFromPath(char *szAbslolute, const char *szTo, int iAttribTo, const char *szFrom, int iAttribFrom);
//
//#ifndef ROOTS_GAME
//	void Init(const char* pszPath);
//#endif
//	void Init(void);
//
//	enum {
//		//		faArchive = FILE_ATTRIBUTE_ARCHIVE,
//		//		faCompressed = FILE_ATTRIBUTE_COMPRESSED,
//		faDirectory = FILE_ATTRIBUTE_DIRECTORY,
//		faNormal = FILE_ATTRIBUTE_NORMAL,
//		//		faHidden = FILE_ATTRIBUTE_HIDDEN,
//		//		faReadonly = FILE_ATTRIBUTE_READONLY,
//		//		faSystem = FILE_ATTRIBUTE_SYSTEM,
//		//		faTemporary = FILE_ATTRIBUTE_TEMPORARY
//	};
//
//	///////////////////////////////////////////////////////////////////////////////
//	inline bool PathRelativFromTextDir(char *szRelativ, const char *szTo, int iAttrib)
//	{
//		PathAbsoluteFromDataDir(m_szTemp, m_szTextDir, faDirectory);
//		return PathRelativToPathFromPath(szRelativ, szTo, iAttrib, m_szTemp, faDirectory);
//	}
//	inline bool PathAbsoluteFromTextDir(char *szAbsolute, const char *szTo, int iAttrib)
//	{
//		PathAbsoluteFromDataDir(m_szTemp, m_szTextDir, faDirectory);
//		return PathAbsoluteToPathFromPath(szAbsolute, szTo, iAttrib, m_szTemp, faDirectory);
//	}
//	///////////////////////////////////////////////////////////////////////////////
//	inline bool PathRelativFromMapsDir(char *szRelativ, const char *szTo, int iAttrib)
//	{
//		PathAbsoluteFromDataDir(m_szTemp, m_szMapsDir, faDirectory);
//		return PathRelativToPathFromPath(szRelativ, szTo, iAttrib, m_szTemp, faDirectory);
//	}
//	inline bool PathAbsoluteFromMapsDir(char *szAbsolute, const char *szTo, int iAttrib)
//	{
//		PathAbsoluteFromDataDir(m_szTemp, m_szMapsDir, faDirectory);
//		return PathAbsoluteToPathFromPath(szAbsolute, szTo, iAttrib, m_szTemp, faDirectory);
//	}
//	///////////////////////////////////////////////////////////////////////////////
//	inline bool PathRelativFromMeshesDir(char *szRelativ, const char *szTo, int iAttrib)
//	{
//		PathAbsoluteFromDataDir(m_szTemp, m_szMeshesDir, faDirectory);
//		return PathRelativToPathFromPath(szRelativ, szTo, iAttrib, m_szTemp, faDirectory);
//	}
//	inline bool PathAbsoluteFromMeshesDir(char *szAbsolute, const char *szTo, int iAttrib)
//	{
//		PathAbsoluteFromDataDir(m_szTemp, m_szMeshesDir, faDirectory);
//		return PathAbsoluteToPathFromPath(szAbsolute, szTo, iAttrib, m_szTemp, faDirectory);
//	}
//	///////////////////////////////////////////////////////////////////////////////
//	inline bool PathRelativFromSoundDir(char *szRelativ, const char *szTo, int iAttrib)
//	{
//		PathAbsoluteFromDataDir(m_szTemp, m_szSoundDir, faDirectory);
//		return PathRelativToPathFromPath(szRelativ, szTo, iAttrib, m_szTemp, faDirectory);
//	}
//	inline bool PathAbsoluteFromSoundDir(char *szAbsolute, const char *szTo, int iAttrib)
//	{
//		PathAbsoluteFromDataDir(m_szTemp, m_szSoundDir, faDirectory);
//		return PathAbsoluteToPathFromPath(szAbsolute, szTo, iAttrib, m_szTemp, faDirectory);
//	}
//	///////////////////////////////////////////////////////////////////////////////
//	inline bool PathRelativFromTexturesDir(char *szRelativ, const char *szTo, int iAttrib)
//	{
//		PathAbsoluteFromDataDir(m_szTemp, m_szTexturesDir, faDirectory);
//		return PathRelativToPathFromPath(szRelativ, szTo, iAttrib, m_szTemp, faDirectory);
//	}
//	inline bool PathAbsoluteFromTexturesDir(char *szAbsolute, const char *szTo, int iAttrib)
//	{
//		PathAbsoluteFromDataDir(m_szTemp, m_szTexturesDir, faDirectory);
//		return PathAbsoluteToPathFromPath(szAbsolute, szTo, iAttrib, m_szTemp, faDirectory);
//	}
//	///////////////////////////////////////////////////////////////////////////////
//	inline bool PathRelativFromSaveDir(char *szRelativ, const char *szTo, int iAttrib)
//	{
//		PathAbsoluteFromWorkingDir(m_szTemp, m_szSaveDir, faDirectory);
//		return PathRelativToPathFromPath(szRelativ, szTo, iAttrib, m_szTemp, faDirectory);
//	}
//	inline bool PathAbsoluteFromSaveDir(char *szAbsolute, const char *szTo, int iAttrib)
//	{
//		PathAbsoluteFromWorkingDir(m_szTemp, m_szSaveDir, faDirectory);
//		return PathAbsoluteToPathFromPath(szAbsolute, szTo, iAttrib, m_szTemp, faDirectory);
//	}
//	///////////////////////////////////////////////////////////////////////////////
//	inline bool PathRelativFromTempDir(char *szRelativ, const char *szTo, int iAttrib)
//	{
//		PathAbsoluteFromWorkingDir(m_szTemp, m_szTempDir, faDirectory);
//		return PathRelativToPathFromPath(szRelativ, szTo, iAttrib, m_szTemp, faDirectory);
//	}
//	inline bool PathAbsoluteFromTempDir(char *szAbsolute, const char *szTo, int iAttrib)
//	{
//		PathAbsoluteFromWorkingDir(m_szTemp, m_szTempDir, faDirectory);
//		return PathAbsoluteToPathFromPath(szAbsolute, szTo, iAttrib, m_szTemp, faDirectory);
//	}
//	///////////////////////////////////////////////////////////////////////////////
//	/// zmienia rozszerzenie w podanej sciezce na to podane w szExt
//	static void PathChangeExt(char *szChanged, const char *szPath, const char *szExt);
//	/// dodaje rozszerzenie do podanej sciezki
//	static void PathAddExt(char *szChanged, const char *szPath, const char *szExt);

