//
// Created by dizzy on 1/25/23.
//

#ifndef PROJECT_LEAGUE_AI_CHAMPIONSTATS_H
#define PROJECT_LEAGUE_AI_CHAMPIONSTATS_H

#include <string>

using namespace std;

class ChampionStats {
private:
    float abilityHaste;
    float abilityPower;
    float armor;
    float armorPenetrationFlat;
    float armorPenetrationPercent;
    float attackDamage;
    float attackRange;
    float attackSpeed;
    float bonusArmorPenetrationPercent;
    float bonusMagicPenetrationPercent;
    float cooldownReduction;
    float critChance;
    float critDamage;
    float currentHealth;
    float healthRegen;
    float lifeSteal;
    float magicLethality;
    float magicPenetrationFlat;
    float magicPenetrationPercent;
    float magicResist;
    float maxHealth;
    float moveSpeed;
    float omnivamp;
    float physicalLethality;
    float physicalVamp;
    float resourceMax;
    float resourceRegen;
    string resourceType;
    float resourceValue;
    float spellVamp;
    float tenacity;
    float CurrentGold;

public:
    ChampionStats(float abilityHaste, float abilityPower, float armor, float armorPenetrationFlat, float armorPenetrationPercent, float attackDamage, float attackRange, float attackSpeed, float bonusArmorPenetrationPercent, float bonusMagicPenetrationPercent, float cooldownReduction, float critChance, float critDamage, float currentHealth, float healthRegen, float lifeSteal, float magicLethality, float magicPenetrationFlat, float magicPenetrationPercent, float magicResist, float maxHealth, float moveSpeed, float omnivamp, float physicalLethality, float physicalVamp, float resourceMax, float resourceRegen, string resourceType, float resourceValue, float spellVamp, float tenacity, float CurrentGold) {
        this->abilityHaste = abilityHaste;
        this->abilityPower = abilityPower;
        this->armor = armor;
        this->armorPenetrationFlat = armorPenetrationFlat;
        this->armorPenetrationPercent = armorPenetrationPercent;
        this->attackDamage = attackDamage;
        this->attackRange = attackRange;
        this->attackSpeed = attackSpeed;
        this->bonusArmorPenetrationPercent = bonusArmorPenetrationPercent;
        this->bonusMagicPenetrationPercent = bonusMagicPenetrationPercent;
        this->cooldownReduction = cooldownReduction;
        this->critChance = critChance;
        this->critDamage = critDamage;
        this->currentHealth = currentHealth;
        this->healthRegen = healthRegen;
        this->lifeSteal = lifeSteal;
        this->magicLethality = magicLethality;
        this->magicPenetrationFlat = magicPenetrationFlat;
        this->magicPenetrationPercent = magicPenetrationPercent;
        this->magicResist = magicResist;
        this->maxHealth = maxHealth;
        this->moveSpeed = moveSpeed;
        this->omnivamp = omnivamp;
        this->physicalLethality = physicalLethality;
        this->physicalVamp = physicalVamp;
        this->resourceMax = resourceMax;
        this->resourceRegen = resourceRegen;
        this->resourceType = resourceType;
        this->resourceValue = resourceValue;
        this->spellVamp = spellVamp;
        this->tenacity = tenacity;
        this->CurrentGold = CurrentGold;
    };

    float getAbilityHaste(){
        return this->abilityHaste;
    };

    float getAbilityPower(){
        return this->abilityPower;
    };

    float getArmor(){
        return this->armor;
    };

    float getArmorPenetrationFlat(){
        return this->armorPenetrationFlat;
    };

    float getArmorPenetrationPercent(){
        return this->armorPenetrationPercent;
    };

    float getAttackDamage(){
        return this->attackDamage;
    };

    float getAttackRange(){
        return this->attackRange;
    };

    float getAttackSpeed(){
        return this->attackSpeed;
    };

    float getBonusArmorPenetrationPercent(){
        return this->bonusArmorPenetrationPercent;
    };

    float getBonusMagicPenetrationPercent(){
        return this->bonusMagicPenetrationPercent;
    };

    float getCooldownReduction(){
        return this->cooldownReduction;
    };

    float getCritChance(){
        return this->critChance;
    };

    float getCritDamage(){
        return this->critDamage;
    };

    float getCurrentHealth(){
        return this->currentHealth;
    };

    float getHealthRegen(){
        return this->healthRegen;
    };

    float getLifeSteal(){
        return this->lifeSteal;
    };

    float getMagicLethality(){
        return this->magicLethality;
    };

    float getMagicPenetrationFlat(){
        return this->magicPenetrationFlat;
    };

    float getMagicPenetrationPercent(){
        return this->magicPenetrationPercent;
    };

    float getMagicResist(){
        return this->magicResist;
    };

    float getMaxHealth(){
        return this->maxHealth;
    };

    float getMoveSpeed(){
        return this->moveSpeed;
    };

    float getOmnivamp(){
        return this->omnivamp;
    };

    float getPhysicalLethality(){
        return this->physicalLethality;
    };

    float getPhysicalVamp(){
        return this->physicalVamp;
    };

    float getResourceMax(){
        return this->resourceMax;
    };

    float getResourceRegen(){
        return this->resourceRegen;
    };

    string getResourceType(){
        return this->resourceType;
    };

    float getResourceValue(){
        return this->resourceValue;
    };

    float getSpellVamp(){
        return this->spellVamp;
    };

    float getTenacity(){
        return this->tenacity;
    };

    float getCurrentGold(){
        return this->CurrentGold;
    };

    void setAbilityHaste(float abilityHaste){
        this->abilityHaste = abilityHaste;
    };

    void setAbilityPower(float abilityPower){
        this->abilityPower = abilityPower;
    };

    void setArmor(float armor){
        this->armor = armor;
    };

    void setArmorPenetrationFlat(float armorPenetrationFlat){
        this->armorPenetrationFlat = armorPenetrationFlat;
    };

    void setArmorPenetrationPercent(float armorPenetrationPercent){
        this->armorPenetrationPercent = armorPenetrationPercent;
    };

    void setAttackDamage(float attackDamage){
        this->attackDamage = attackDamage;
    };

    void setAttackRange(float attackRange){
        this->attackRange = attackRange;
    };

    void setAttackSpeed(float attackSpeed){
        this->attackSpeed = attackSpeed;
    };

    void setBonusArmorPenetrationPercent(float bonusArmorPenetrationPercent){
        this->bonusArmorPenetrationPercent = bonusArmorPenetrationPercent;
    };

    void setBonusMagicPenetrationPercent(float bonusMagicPenetrationPercent){
        this->bonusMagicPenetrationPercent = bonusMagicPenetrationPercent;
    };

    void setCooldownReduction(float cooldownReduction){
        this->cooldownReduction = cooldownReduction;
    };

    void setCritChance(float critChance){
        this->critChance = critChance;
    };

    void setCritDamage(float critDamage){
        this->critDamage = critDamage;
    };

    void setCurrentHealth(float currentHealth){
        this->currentHealth = currentHealth;
    };

    void setHealthRegen(float healthRegen){
        this->healthRegen = healthRegen;
    };

    void setLifeSteal(float lifeSteal){
        this->lifeSteal = lifeSteal;
    };

    void setMagicLethality(float magicLethality){
        this->magicLethality = magicLethality;
    };

    void setMagicPenetrationFlat(float magicPenetrationFlat){
        this->magicPenetrationFlat = magicPenetrationFlat;
    };

    void setMagicPenetrationPercent(float magicPenetrationPercent){
        this->magicPenetrationPercent = magicPenetrationPercent;
    };

    void setMagicResist(float magicResist){
        this->magicResist = magicResist;
    };

    void setMaxHealth(float maxHealth){
        this->maxHealth = maxHealth;
    };

    void setMoveSpeed(float moveSpeed){
        this->moveSpeed = moveSpeed;
    };

    void setOmnivamp(float omnivamp){
        this->omnivamp = omnivamp;
    };

    void setPhysicalLethality(float physicalLethality){
        this->physicalLethality = physicalLethality;
    };

    void setPhysicalVamp(float physicalVamp){
        this->physicalVamp = physicalVamp;
    };

    void setResourceMax(float resourceMax){
        this->resourceMax = resourceMax;
    };

    void setResourceRegen(float resourceRegen){
        this->resourceRegen = resourceRegen;
    };

    void setResourceType(string resourceType){
        this->resourceType = resourceType;
    };

    void setResourceValue(float resourceValue){
        this->resourceValue = resourceValue;
    };

    void setSpellVamp(float spellVamp){
        this->spellVamp = spellVamp;
    };

    void setTenacity(float tenacity){
        this->tenacity = tenacity;
    };

    void setCurrentGold(float CurrentGold){
        this->CurrentGold = CurrentGold;
    };
};


#endif //PROJECT_LEAGUE_AI_CHAMPIONSTATS_H
