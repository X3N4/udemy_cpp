.PHONY: clean All

All:
	@echo "----------Building project:[ sample - Debug ]----------"
	@cd "sample" && "$(MAKE)" -f  "sample.mk"
clean:
	@echo "----------Cleaning project:[ sample - Debug ]----------"
	@cd "sample" && "$(MAKE)" -f  "sample.mk" clean
