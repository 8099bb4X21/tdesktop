#pragma once

namespace NoadSettings {

// 屏蔽赞助消息/广告（默认开启）
inline bool DisableAds() {
    return true;
}

// 本地 Telegram Premium（默认关闭，需在代码中设为 true 启用）
// 设为 true 后，客户端认为当前用户拥有 Premium，无需实际付费
inline bool LocalPremium() {
    return false;
}

} // namespace NoadSettings
