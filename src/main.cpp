#include <Geode/Geode.hpp>
#include <Geode/modify/RewardChestLayer.hpp>

using namespace geode::prelude();

class $modify(CustomChestManager, RewardChestLayer) {
    void onChestClicked(cocos2d::CCObject* sender) {
        RewardChestLayer::onChestClicked(sender);

        log::info("Recompensas interceptadas correctamente por UniversalV0RT3X!");
    }
};
