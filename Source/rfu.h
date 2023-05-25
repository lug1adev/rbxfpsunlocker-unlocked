#pragma once

#define RFU_VERSION "5.0"
#define RFU_GITHUB_REPO "lug1adev"

bool CheckForUpdates();
void RFU_SetFPSCap(double value);
void RFU_OnUIUnlockMethodChange();
void RFU_OnUIClose();
