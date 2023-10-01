#ifndef ENTITYKVALUES_H
#define ENTITYKVALUES_H

#ifdef _WIN32
#pragma once
#endif

#include <public/tier1/utlbuffer.h>
#include <public/entityhandle.h>
#include "baseentity.h"

typedef struct EntityKeyId_t EntityKeyId_t;

class CEntityKeyValues
{
	void CEntityKeyValues();
	void ~CEntityKeyValues();

	void SetValue(EntityKeyId_t key, const char* pString);
	void SetValue(EntityKeyId_t key, CBaseEntity* const &value);
	// CEntityKeyValues::SetValue<CDOTAPlayer *>(CEntityKeyValues *const this, EntityKeyId_t key, CDOTAPlayer *const *const value)
	void SetValue(EntityKeyId_t key, CEntityHandle* const &value);
	void SetValue(EntityKeyId_t key, CHandle<CBaseEntity>* const &value);

	bool Unserialize(CUtlBuffer &buffer, bool bUnk = true);
	bool Serialize(CUtlBuffer &buffer);
};